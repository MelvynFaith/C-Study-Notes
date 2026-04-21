#include <stdio.h>

int main(){
    int target_port;
    
    target_port = 80;

    printf("Target port: %d\n", target_port);
    printf("Memory address: %p\n", &target_port);

    return 0;
} 