#include "linked_list.h"


void linked_list_init(linked_list* list){
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return;
}

void linked_list_print(linked_list list){
    
    printf("*** LINKED LIST PRINTOUT ***\n");
    printf("Head - 0x%x | Tail - 0x%x | Size - %d\n", list.head, list.tail, list.size);

    node* curr_node = list.head;
    int counter = 0;
    while(curr_node != NULL){
        printf("Node %d: Node Addr - 0x%08x | Next Node - 0x%08x | Data - %d \n", counter, curr_node, curr_node->next, curr_node->data);
        curr_node = curr_node->next;
        counter++;
    }

    return;
}

void linked_list_push(linked_list* list, int new_data){
    node* new_node = malloc(sizeof(node)); // allocating new node for linked list

    new_node->data = new_data; // setting node data and next node value
    new_node->next = list->head;
    
    list->head = new_node; // placing new node at start of linked list

    if(new_node->next == NULL){ // if the new added node's next node is null, this must be the tail of the linked list
        list->tail = new_node;
    }

    list->size++;

    return;
}

void linked_list_pop(linked_list* list){
    node* new_head = list->head->next; // storing new head before deleting current head
    
    free(list->head); // deallocate memory of current head
    
    list->head = new_head; // replace old head with new head

    if(list->head == NULL){ // if the new head is NULL, tail of the linked list has been popped meaning must remove dangling pointer
        list->tail = NULL; 
    }

    list->size--;

    return;
}

void linked_list_append(linked_list* list, int new_data){
    node* new_node = malloc(sizeof(node)); // allocating new node for linked list

    new_node->data = new_data; // setting node data next node value of new tail
    new_node->next = NULL;

    if(list->tail != NULL){
        list->tail->next = new_node; // setting new next value of the previous tail node
    }

    list->tail = new_node;

    if(list->head == NULL){ // if there is currently no head, new node must be the new head
        list->head = new_node;
    }

    list->size++;

    return;
}
