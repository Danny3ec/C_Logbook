#include <stdio.h>

#define ASSERT(condition, ...) if (!(condition)) { printf("Assertion failed: " __VA_ARGS__);}

int main() {
    int value = 7;
    ASSERT(value > 10, "Expected value to be greater than 10, but got %d\n", value);
    return 0;
}
