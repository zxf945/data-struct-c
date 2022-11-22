#include<stdio.h>
#include<stdlib.h>

#include "array_list.h"

// 数组初始化
_Bool initList(ArrayList list){
	list->arr = malloc(sizeof(E)*10);
	if (list->arr == NULL) return 0;
	list->capacity = 10;
	list->size = 0;
	return 1;
}
// 插入数据
_Bool insertList(ArrayList list,E element, int index){
	if (index < 1 || index > list->size+1) return 0;
	
	if (list->size == list->capacity) {
		int newCapacity = list->capacity+(list->capacity >> 1);
		E* newArr = realloc(list->arr,sizeof(E)*newCapacity);
		if(newArr == NULL) return 0;
		list->arr = newArr;
		list->capacity = newCapacity;
	}
	
	
	for (int i = list->size; i > index-1; --i){
		list->arr[i] = list->arr[i-1];
	}
	list->arr[index-1] = element;
	list->size++;
	return 1;
}

// 打印信息
void printList(ArrayList list){
	for(int i = 0; i< list->size; i++){
		printf("%d ", list->arr[i]);
	}
	printf("\n");
}
