#include <stdio.h>

int main(){
 
    int y = 161803;
 
    int *py = &y; // Pointer, storing the address of y.
 
    printf("Y is = %d, address is %p",y, &py);
 
    getchar();
 
    return 0;
}