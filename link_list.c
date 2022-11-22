
#include<stdio.h>
#include<stdlib.h>
#include"link_list.h"

void initList(Node head){
    head->next = NULL;
}

_Bool insertList(Node head,E element,int index){
    if(index < 1) return 0;
    while (--index){
        head = head->next;
        if (head == NULL) return 0;
    }
    Node node = malloc(sizeof(LinkNode));
    if(node == NULL) return 0;
    node->elemnt = element;
    node->next = head->next;
    head->next = node;
    return 1;
}

_Bool deleteList(Node head, int index){
    if (index < 1) return 0;
    while (--index){
        head = head->next;
        if (head == NULL) return 0;
    }
    if (head->next == NULL) return 0;
    Node tmp = head->next;
    head->next = head->next->next;
    free(tmp);
    return 1;
}

void printList(Node head){
    while(head->next){
        head = head->next;
        printf("%d ", head->elemnt);
    }
    printf("\n");
}