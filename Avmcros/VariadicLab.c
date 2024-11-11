// Example of a variadic macro for printing values
#define PRINT_VALUES(...) printf("Values: " __VA_ARGS__)

//Usage in a C program
#include <stdio.h>

int main() {
    PRINT_VALUES("%d, %f, %s\n", 10, 3.14, "Whats up");
    return 0;
}