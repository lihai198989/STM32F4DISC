/*
 * list.h
 *
 *  Created on: Aug 12, 2017
 *      Author: li
 */

#ifndef INC_LIST_H_
#define INC_LIST_H_

#include "os_types.h"

struct list
{
	struct list *next;
	struct list *prev;
};


inline void list_init(struct list *pl)
{
	pl->next = NULL_PTR;
	pl->prev = NULL_PTR;
}

/*
 * insert ne before pos
 */
inline void list_insert(struct list *pos, struct list *ne)
{
	if ((pos != NULL_PTR) && (ne != NULL_PTR))
	{
		ne->next = pos;
		ne->prev = pos->prev;
		pos->prev = ne;

		if(ne->prev != NULL_PTR)
		{
			ne->prev->next = ne;
		}
	}
}

inline void list_delete(struct list *pos)
{

}

#endif /* INC_LIST_H_ */
