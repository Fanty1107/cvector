#ifndef CVECTOR_H_
#define CVECTOR_H_

#include <stddef.h>

typedef struct{
    int *data;
    size_t size;
    size_t capacity;
}Vector;

Vector new_vec();
int push_back(Vector *vec, int push_data);
int pop(Vector *vec);
void delete_vec(Vector *vec);

#endif//CVECTOR_H_
