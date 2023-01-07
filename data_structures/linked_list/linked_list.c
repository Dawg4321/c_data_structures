#include "linked_list.h"


void linked_list_init(linked_list* list){
    list->head = NULL;
    list->size = 0;

    return;
}

void linked_list_print(linked_list list){
    node* curr_node = list.head;
    
    int counter = 0;
    while(curr_node != NULL){
        printf("Node %d: Node Addr - %x | Next Node - %x | Data - %d \n", counter, curr_node, curr_node->next, curr_node->data);
        curr_node = curr_node->next;
        counter++;
    }

    return;
}

void linked_list_push(linked_list* list, int new_data){
    node* new_node = malloc(sizeof(node));

    new_node->data = new_data;
    new_node->next = list->head;
    
    list->head = new_node;

    list->size++;

    return;
}

void linked_list_pop(linked_list* list){
    node* new_head = list->head->next; // storing new head before deleting current head
    
    free(list->head); // deallocate memory of current head
    
    list->head = new_head; // replace old head with new head

    list->size--;
    return;
}