#include "../include/abs.h"
#include "../include/cvector.h"
#include <stdio.h>

int main(){
    double v = -21.421;
    int value = fy_abs(v);
    printf("%d\n", value);
    Vector vec = new_vec();
    for(int i = 0; i < 100; i++){
       if(push_back(&vec, value) == 1){
           printf("Failed in loop\n");
           break;
       }
    }
    push_back(&vec, 99);
    for(int i = 0; i < vec.size; i++){
        printf("%d ", vec.data[i]);
    }
    printf("\nCapacity: %zu", vec.capacity);
    printf("\nSize: %zu", vec.size);
    delete_vec(&vec);
    return 0;
}
