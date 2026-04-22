#include <stdio.h>

float add(int x, int y){
    return (float)(x + y);
}

int main(){
    float result = add(10,5);
    printf("10 + 5 = %f\n", result);
    return 0;
}