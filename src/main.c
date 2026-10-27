#include "../include/abs.h"
#include "../include/cvector.h"
#include "../include/atoi.h"
#include <stdio.h>

int main(){
    char str[] = "-6767";
    int v = fy_atoi(str);
    printf("%d\n\n\n", v);
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
    //pop(&vec); Remove last digit
    for(int i = 0; i < vec.size; i++){
        printf("%d ", vec.data[i]);
    }
    printf("\nCapacity: %zu", vec.capacity);
    printf("\nSize: %zu", vec.size);
    delete_vec(&vec);
    return 0;
}
