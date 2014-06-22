/******	 Vector Struct   "Ori Gofen"  ***************************************/
/****** creation date:5/8/13		*************************************/
/****** modification date:5/8/13	*************************************/


#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "ADTDefs.h"

typedef struct _Vector Vector;

ADTErr NumOfItem(Vector* _vec,size_t * _numof);

void VectorPrint(Vector* _vec);

ADTErr VectorSet(Vector* _vec,size_t _index,int _data);

ADTErr VectorGet(Vector* _vec,size_t _index,int* _data);

ADTErr VectorDelete(Vector* _vec,int* _data);

ADTErr VectorInsert(Vector* _vec,int _data);

void VectorDestroy(Vector* _vec);

Vector* VectorCreate(size_t _size,size_t _blocksize);

int VectorReturnData(Vector* _vec,size_t index);

size_t VectorFindIndexMember(Vector* _vec,int _data);
#endif	
/**********we make header with name and date of creation, and what it does and modification date.in all files********
we make different h file for adt errors
	selfexplained ducomant things so not explain what is obviouas
add a function name VectorItemsNum THAT gives ther costumer the number of items it returns adterr
put mark:add item to end, delete item from end
index mark if it rund from zero or 1 
enum err_ok, err_general ,err_not_initialized,err_aloocaion_failed,err_reallocatopn_failed, underflow,err overflow,err wrong index	
HANDLEERRORS is a function that returns a string with wxplanation of the error and not a number more nice	*/
