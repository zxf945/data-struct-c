#include<stdio.h>

typedef int E;

typedef struct LinkNode{ //单链表
    E elemnt;
    struct LinkNode * next;
} LinkNode, * Node;

void initList(Node head);
_Bool insertList(Node head,E element, int index);
_Bool deleteList(Node head, int index);
void printList(Node head);