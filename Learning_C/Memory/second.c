#include <stdio.h>

int main() {

    long int *ptn = (long int *)0x000000acce1ffb00;
    printf("attempting to access memory location: %ld",ptn, *ptn);

 
    return 0;
}