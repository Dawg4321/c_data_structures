#include <stdio.h>

#include "vector.h"

int main(){

    vector vec;

    vector_init(&vec);

    for(int i = 0; i < 8; i++){
        vector_push_back(&vec, i);
    }
    vector_print(vec);
    
    for(int i = 0; i < 8; i++){
        vector_push_back(&vec, i);
    }
    vector_print(vec);
    
    for(int i = 0; i < 8; i++){
        vector_pop_back(&vec);
    }
    vector_print(vec);

    for(int i = 0; i < 8; i++){
        vector_pop_back(&vec);
    }
    vector_print(vec);

    vector_deinit(&vec);
    vector_print(vec);
}