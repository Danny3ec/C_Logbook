#include <stdio.h>

void bitwiseoperations(int a, int b);


int main() {
    
    // Example values for demostration
    int value1 = 15;
    int value2 = 7;

    printf("Bitwise operations demostration:\n");
    bitwiseoperations(value1, value2);
    int a = 5, b = 3;
    bitwiseoperations(a, b);

    return 0;
}
void bitwiseoperations(int a, int b) {
    //AND Operation
    int andResult = a & b;
    printf("AND result: %d & %d = %d\n", a, b, andResult);


    //OR Operation
    int orResult = a | b;
    printf("OR result: %d | %d = %d\n", a, b, orResult);
    

    //XOR Operation
    int xorResult = a ^ b;
    printf("XOR result: %d ^ %d = %d\n", a, b, xorResult);


    //Negation Operation
    int negationA = ~a;
    int negationB = ~b;
    printf("Negation result: ~%d = %d, ~%d = %d\n", a, negationA, b, negationB);
}
