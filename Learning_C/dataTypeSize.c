#include<stdio.h>
int main(){
    printf("Data_Types\t\tStorage_Size \n");
    printf("char\t\t\t%d byte(s) \n", sizeof(char));
    printf("int\t\t\t%d byte(s) \n", sizeof(int));
    printf("double\t\t\t%d byte(s) \n", sizeof(double));
    printf("float\t\t\t%d byte(s) \n", sizeof(float));
    printf("unsigned char\t\t%ld byte(s) \n", sizeof(unsigned char));
    printf("long\t\t\t%d byte(s) \n", sizeof(long));
    printf("unsigned long\t\t%ld byte(s) \n", sizeof(unsigned long));
    printf("long double\t\t%ld byte(s) \n", sizeof(long double));

    return 0;
}