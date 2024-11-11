#include <stdio.h>
int main()
{
    int testInteger = 5;
    printf("number = %d", testInteger);
    float number1 = 13.5;
    double number2 = 12.4;
    printf("number1 = %f\n", number1);
    printf("number2 = %lf", number2);

    char chr = 'a';

    printf("character = %c, value is = %d\n", chr, chr);

    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("Number = %d", testInteger);
    

    return 0;

}