#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_DATA_TYPE int

typedef struct{
    int* array;
    unsigned int size;
    unsigned int allocated_size;

}vector;

void vector_init(vector* vec); // vector init functions
void vector_deinit(vector* vec); // freeing allocated vector memory

void vector_append(vector* vec, int data); // appends data to end of the vector

void vector_print(vector vec); // prints vector data

#endif