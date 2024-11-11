// main.c
// Example of conditional compilation macros


#ifdef DEBUG_MODE
#define DEBUG_PRINT(msg) printf("Debug: %s\n", msg)
#else
#define DEBUG_PRINT(msg)
#endif
#include "myheader.h"
#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    printf("PI is: %.5f\n", PI);
    int num = 5;
    printf("The square of %d is: %d\n", num, SQUARE(num));
    DEBUG_PRINT("This is a debug message");
    
    printf("PI is: %.5f\n", PI);
    greet();

    int result = add(5, 7);
    printf("The sum is: %d\n", result);

    return 0;
}