// Example of stringification and token pasting
#define STRINGIFY(x) #x
// Usage in a C program
#include <stdio.h>

int main () {
    printf("Stringified: %s\n", STRINGIFY(Hello));
    return 0;
}