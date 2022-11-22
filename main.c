#include<stdio.h>

#include"link_list.h"

int	main(){
	LinkNode node;
	initList(&node);
	for(int i=1;i<=3;i++){
		insertList(&node, i*100, 1);
	}
	printList(&node);
	deleteList(&node, 2);
	printList(&node);
}