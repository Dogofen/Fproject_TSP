#ifndef __STACK_H__
#define __STACK_H__


typedef struct _Stack Stack;

Stack* StackCreate(size_t _size,size_t _blocksize);

void StackDestroy(Stack* _stack);

ADTErr StackPush(Stack* _stack,int _data);

ADTErr StackPop(Stack* _stack,int * _data);

ADTErr StackTop(Stack* _stack,int * _data);

int StackIsEmpty(Stack* _stack);

void StackPrint(Stack* _stack);




#endif
