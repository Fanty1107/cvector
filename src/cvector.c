#include "../include/cvector.h"
#include <stdlib.h>

Vector new_vec(){
    size_t cap = 8;
    int *size_data = malloc(cap * sizeof(*size_data));
    Vector v = {
        .data = size_data,
        .size = 0,
        .capacity = size_data ? cap : 0,
    };
    return v;
}
int push_back(Vector *vec, int push_data){
    if(vec == NULL || vec->data == NULL)
        return 1;
    if(vec->capacity == vec->size){
        size_t new_cap = vec->capacity ? vec->capacity * 2 : 8;
        int *new_data = realloc(vec->data, new_cap * sizeof *new_data);
        
        if(new_data == NULL)
            return 1;
        vec->data = new_data;
        vec->capacity = new_cap;
    }
    vec->data[vec->size++] = push_data;
    return 0;
}
int pop(Vector *vec){
    if (vec == NULL || vec->size == 0)
        return 1;
    int *out = &vec->data[vec->size];

    vec->size--;

    if (out != NULL)
        *out = vec->data[vec->size];

    return 0;
}
void delete_vec(Vector *vec){
    free(vec->data);
    *vec = (Vector){0};
}
