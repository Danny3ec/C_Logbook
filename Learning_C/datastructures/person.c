#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main(){
    struct Person person1;
    struct Person *personPointer = &person1;

    //without using pointer.
    person1.age = 15;
    printf("Person1's age: %d\n",person1.age);

    //Using the arrow operator
    personPointer->age = 25;
    printf("Person1's age: %d\n", personPointer->age);

    //Equivalent longhand notation
    (*personPointer).age = 35;
    printf("Person1's age: %d\n",(*personPointer).age);
}