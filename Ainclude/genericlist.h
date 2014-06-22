/**********************************************************************
	Author: Ori Gofen
	Creation date: 4.10.13
	Last modified date: 8.10.13
************************************************************************************************************************	
	Description: Generic List Struct

	List Struct Saves all kind of data by order where every members points to the next one
	and to the previous member.

	Lists assumptions:	
	every function has its unique use,it means for example that list remove cannot remove items that
	needs head or tail update, pophead and pop tail are made for that.
	we made this to give you the best list we can.
	every list that is created poins to null at the edges as described in comp books.
	
	Using list's API
		
	1.creating a list:
	create an object called list and use the function
	
	2.adding items:
	if its the first two items uses push head or tail or both
	to add items. after inserting the edges items, you can obtain an iterator
	by "playing	" the list begin list next... functions, and choose to instert an intem
	inline to that item, the function by default will enter the item previous to that iterator.
	
	3.removing items:
	same as adding but with one change list remove cannot remove head or tail members
	only push head or tail.
	
	4.using listissame and listfindfirst:
	those functions demand inserting your comparison or do func as listed below.
*/
#ifndef __GENRICLIST_H__
#define __GENERICLIST_H__

typedef struct _List List;
typedef void* ListItr;

/*error is when itr is pointing to list tail member*/

typedef void* Data;
typedef void* Param;
typedef int	(*DataComp)(Data,Data);	/*0 if equal*/
typedef int	(*IsMatch)(Data,Data);	/*0=success*/
typedef int	(*DoFunc)(Data,Param); /* we assume param is some kind of index but not necessarily*/
typedef void	(*PrintFunc)(Data data);/*users print function defined in main.c */

/*general list API*/

List*	ListCreate();
void	ListDestroy(List* _list);

ListItr	ListPushHead(List* _list, Data _data);
ListItr	ListPushTail(List* _list, Data _data);

Data	ListPopHead(List* _list);
Data	ListPopTail(List* _list);

size_t	ListCountItems(List* _list);
int	    ListIsEmpty(List* _list);
void	ListPrint(List* _list,PrintFunc Printer);

/*iterator API*/

ListItr	ListBegin(List* _list);
ListItr	ListEnd(List* _list);
ListItr	ListNext(ListItr _listItr);
ListItr	ListPrev(ListItr _listItr);
Data	ListGetData(ListItr _listItr);
int     ListIsSame(ListItr _listItr1,ListItr _listItr2);

/*List insert [before] and return ListItr to new*/

ListItr	ListInsert(ListItr _listItr, Data _data);
Data	ListRemove(ListItr _listItr);

/*
return listItr to the first item in list for which _cmp(list_data,argument_data) returns 0,
not including _to, be carfull not to get to the end*/
ListItr	ListFindFirst(ListItr _from, ListItr _to, DataComp _cmp, Data _data);

/*
perform specified function _do(Data, Param) for each item in the collection untill error is returned from the _do function or untill the function reaches the end, not including _to, be carfull not to get to the end*/

int		ListForEach(ListItr _from, ListItr _to, DoFunc _do, Param _param);

#endif

