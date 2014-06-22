/******	Queue- a struct by Ori Gofen*/
/****** creation date:16/8/13  */
/****** modification date:16/8/13 */

#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <stdlib.h>

#include "ADTDefs.h"

typedef struct Queue Queue;

void QueuePrint(Queue* _queue);

Queue * QueueCreate(size_t _size);

void QueueDestroy(Queue* _queue);

ADTErr QueueInsert(Queue* _queue,int _item);

ADTErr QueueRemove(Queue* _queue,int* _data);


#endif
