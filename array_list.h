#ifndef __ARRAY_LIST__
#define __ARRAY_LIST__

typedef int E;

typedef struct List { // 顺序表
	E* arr;			//指向顺序表的底层数组
	int capacity;	// 数组的容量
	int size;	//表中元素的数量
} List,* ArrayList;

// 初始化顺序表
_Bool initList(ArrayList list);
_Bool insertList(ArrayList list,E element, int index);
void printList(ArrayList list);

#endif