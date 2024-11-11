#include <stdio.h>

//Function declaration
void bitwiseOperations(int a, int b);

int main() {
    int value1, value2;

    //Input declaration
    printf("Enter the first integer value: ");
    scanf("%d", &value1);
    fflush(stdout);
    printf("Enter the second  integer value: ");
    scanf("%d", &value2);
    fflush(stdout);

    //Call the functions
    bitwiseOperations(value1, value2);

    return 0;

}

//Function steps
void bitwiseOperations(int a, int b) {
    // AND Opertaion
    int andResult = a & b;
    printf("AND result: %d & %d = %x\n", a, b, andResult);
    fflush(stdout);

    // OR Operation
    int orResult = a | b;
    printf("OR result: %d | %d = %x\n", a, b, orResult);
    fflush(stdout);


    // XOR Operation
    int xorResult = a ^ b;
    printf("XOR result: %d ^ %d = %x\n", a, b, xorResult);

    
    // Negation Operation
    int negationA = ~a;
    int negationB = ~b;
    printf("Negation result: ~%d = %x. ~%d = %x\n", a, negationA, b, negationB);
    fflush(stdout);


    // Right shift operation
    int rightShiftA = a >> 1;
    int rightShiftB = b >> 1;
    printf("Right shift result: %d >> 1 = %x, %d >> 1 = %x\n", a, rightShiftA, b, rightShiftB);
    fflush(stdout);


    // Left shift operation
    int leftShiftA =a << 1;
    int leftShiftB = b << 1;
    printf("Left shift result: %d << 1 = %x, %d << 1 = %x\n", a, leftShiftA, b, leftShiftB);
    fflush(stdout);


    // Bitwise function A
    int bitPosition = 2;
    int isBitSetA = (a & (1 << bitPosition)) != 0;
    int isBitSetB = (b & (1 << bitPosition)) != 0;
if ((a & (1 << 2)) != 0) {

    printf("3rd bit is set in %d\n", a);
 }else {
    printf("3rd bit is not set in %d\n", a);
    fflush(stdout);
}


    // Bitwise function B
    int setBitA = a | (1 << bitPosition);
    int setBitB = b | (1 << bitPosition);
    printf("Setting 3rd bit: %d = %x, %d = %x\n", a, setBitA, b, setBitB);
    fflush(stdout);

    // Bitwise function C
    int clearBitA = a & ~(1 << bitPosition);
    int clearBitB = b & ~(1 << bitPosition);
    printf("Clearing 3rd bit: %d = %x, %d = %x\n", a, clearBitA, b, clearBitB);
    fflush(stdout);
}







