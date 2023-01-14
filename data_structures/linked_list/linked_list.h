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
    node* tail;
    unsigned int size;
}linked_list;

void linked_list_init(linked_list* list); // simple init function to ensure that linked list has correct values before use 

void linked_list_push(linked_list* list, int new_data); // pushes new element to top of the linked list
void linked_list_append(linked_list* list, int new_data); // adds element to the end of the linked list
void linked_list_append_n_from_front(linked_list* list, int new_data, unsigned int n); // appends element n nodes from front
                                                                                       // node head = 0th element

int linked_list_pop(linked_list* list); // removes first element in the linked list
void linked_list_remove_last(linked_list* list); // removes last element in the linked list

void linked_list_reverse(linked_list* list); // reverses a linked list

void linked_list_print(linked_list list); // prints linked list data

#endif