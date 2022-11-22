#include<stdio.h>

typedef int E;

typedef struct List { // 顺序表
	E* arr;			//指向顺序表的底层数组
	int capacity;	// 数组的容量
	int size;	//表中元素的数量
} List, * ArrayList;
// typedef struct List List;
// typedef List* ArrayList;
_Bool initList(ArrayList list);
_Bool insertList(ArrayList list,E element, int index);
void printList(ArrayList list);