#include "vector.h"

#include <stdio.h>
#include <stdlib.h>

#define VECTOR_ALLOC_SIZE 8

void vector_init(vector* vec){
    vec->array = malloc(VECTOR_ALLOC_SIZE*sizeof(VECTOR_DATA_TYPE));
    vec->allocated_size = VECTOR_ALLOC_SIZE;
    vec->size = 0;

    return;
} 

void vector_append(vector* vec, int data){
    if(vec->size == vec->allocated_size){
        vec->array = (VECTOR_DATA_TYPE*)realloc(vec->array, (vec->allocated_size + VECTOR_ALLOC_SIZE)*sizeof(VECTOR_DATA_TYPE));
        vec->allocated_size = vec->allocated_size + VECTOR_ALLOC_SIZE;
    }
    
    vec->array[vec->size] = data;
    vec->size++;

    return;
}

void vector_deinit(vector* vec){
    free(vec->array);

    vec->allocated_size = 0;
    vec->size = 0;
    vec->array = NULL; // removing dangling pointer

    return;
}

void vector_print(vector vec){
    printf("*** VECTOR PRINTOUT ***\n");
    printf("Size = %d, Allocated Size = %d\n", vec.size, vec.allocated_size);
    
    for(unsigned int i = 0; i < vec.size; i++){
        printf("%d - %d\n", i, vec.array[i]);
    }

    return;
}