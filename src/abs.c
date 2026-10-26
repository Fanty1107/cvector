#include "../include/abs.h"

int fy_abs(int number){
    if(number <= 0){
        return number * -1;
    }
    return number;
}
long int fy_labs(long int number){
    if(number <= 0){
        return number * -1;
    }
    return number;
}

long long int fy_llabs(long long int number){
    if(number <= 0){
        return number * -1;
    }
    return number;
}
