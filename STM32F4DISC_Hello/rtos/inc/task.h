/*
 * task.h
 *
 *  Created on: Aug 12, 2017
 *      Author: li
 */

#ifndef INC_TASK_H_
#define INC_TASK_H_

#include "os_types.h"

typedef void (*taskEntryPtrType)(void *pargs);

struct task
{
	taskEntryPtrType entry;

	struct task		*next;
	struct task		*prev;

	OS_U32			 period;
	OS_U32			 offset;

	OS_U32			 nextRunTime;	// calculate after entry was called.
	OS_U8			 priority;		// the priority of task. reserved now.
};

#endif /* INC_TASK_H_ */
