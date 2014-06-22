/**********************************************************************************************
	Author:			Boaz Yoresh
	Creation date:	8-10-13
	Last modified:	8-10-13
	Description:
**********************************************************************************************/
#ifndef __TREEGEN_H__
#define __TREEGEN_H__

typedef void* Data;
typedef void* Param;
typedef int	(*DataCompFunc)(Data,Data);	/*0 if equal*/
typedef int	(*IsMatch)(Data,Data);		/*0=success*/
typedef int	(*DoFunc)(Data,Param);		/*does an opration on Data*/
typedef void(*PrintFunc)(Data);

typedef void* TreeItr;
typedef struct _Tree Tree;

typedef enum 
{
	PRE_ORDER = 0,
	IN_ORDER,
	POST_ORDER
}TraverseOrder;
Tree*	TreeCreate(DataCompFunc _comp);
void	TreeDestroy(Tree* _tree);

/*if not found the End itr is returned*/
TreeItr	TreeFind(Tree *_tree, Data _data);
TreeItr	TreeInsert(Tree *_tree, Data _data);

/*_itr may lose valadility(spell check this if you may..) after remove
	* is leaf - just remove itr
	* only one child - "replace"(change pointer) with father
	* 2 kids - go get next ans swap it with me, then remove me*/
Data	TreeRemove(TreeItr _itr);
TreeItr	TreeBegin(Tree *_tree);
TreeItr	TreeEnd(Tree *_tree);
TreeItr	TreeNext(TreeItr _itr);
TreeItr	TreePrev(TreeItr _itr);
Data	TreeGetData(TreeItr _itr);
int		TreeCount(Tree *_tree);

void	TreePrint(Tree *_tree, TraverseOrder _traverseOrder, PrintFunc _printFunc);

#endif /*__TREEGEN_H__*/
