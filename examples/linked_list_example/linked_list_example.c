#include <stdio.h>

#include "linked_list.h"

int main(){

    linked_list my_list; // initializing linked list
    linked_list_init(&my_list);

    linked_list_push(&my_list, 1); // pushing values to linked list
    linked_list_push(&my_list, 2);
    linked_list_push(&my_list, 3);

    linked_list_print(my_list);

    linked_list_pop(&my_list); // popping values from the linked list
    linked_list_pop(&my_list);
    linked_list_pop(&my_list);

    linked_list_print(my_list); 
}