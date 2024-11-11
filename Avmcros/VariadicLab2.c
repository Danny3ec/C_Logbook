#include <stdio.h>
// Define a variadic macro for logging with a level
#define LOG(level, ...) printf("[" level "]" __VA_ARGS__)

int main() {
    LOG("INFO", "Password accepted.\n");
    LOG("DEBUG", "Variable x =%d\n", 8);
    LOG("ERROR", "Failed to open: %s\n", "data.txt");
    return 0;
}