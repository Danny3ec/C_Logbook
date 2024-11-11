//Example of header file with guarded macros
#ifndef MYMACROS_H
#define MYMACROS_H

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#ifndef DEBUG_MODE
    #define DEBUG_PRINT(msg) printf("Debug: %s\n", msg)
#else   
    #define DEBUG_PRINT(msg)
#endif
#endif // MY MACROS_H