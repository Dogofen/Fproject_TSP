/******		Double Linked List- a struct by Ori Gofen 				*/
/****** 		creation date:20/8/13  								*/
/****** 	      modification date:22/8/13							*/

#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "ADTDefs.h"

typedef struct _List List;

int ListJumpSearch(List *_list,int _what,int _jump);

List* ListCreate();

void ListDestroy(List* _list);

ADTErr ListPushHead(List* _list,int data);

ADTErr ListPushTail(List* _list,int data);

ADTErr ListPopHead(List* _list,int * data);

ADTErr ListPopTail(List* _list,int * data);

void ListPrint(List* _list,int direction);

int ListCountItems(List* _list);

int ListIsEmpty(List* _list);

#endif

