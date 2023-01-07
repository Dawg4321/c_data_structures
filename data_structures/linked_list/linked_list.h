#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node{
    node* next;
    int data;
};

typedef struct{
    node* head;
    unsigned int size;
}linked_list;

void linked_list_init(linked_list* list);

void linked_list_print(linked_list list);

void linked_list_push(linked_list* list, int new_data);
#endif