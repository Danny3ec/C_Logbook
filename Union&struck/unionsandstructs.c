#include <stdio.h>
union Typeconverter {
    int intValue;
    float floatValue;
};
int main() {
    union Typeconverter converter;
    converter.floatValue = 3.14;
    printf("Union memory address: %p\n" ,&converter);
    printf("Union.float = %.2f , memory address: %p\n" , converter.floatValue, &converter.floatValue,converter.intValue);
    printf("Union.int + %d memory address: %p\n\n" , converter.intValue,&converter.intValue);
    return 0;
    }



