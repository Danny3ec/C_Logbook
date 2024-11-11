#include <stdio.h>

int main() {
    
    int n = 11, i;
    char ptr[11] = "hello world";

    for (i = 0; i < n; i++)
    {
        printf("\t%p    ||  ptr[%d] =   %c\n", &ptr[i],i,ptr[i]);    
    }
    printf("\t%p    ||  ptr[]   = %c \n", &ptr,*ptr);

    return 0;
 }


