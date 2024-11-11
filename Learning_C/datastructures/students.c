#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  Student {
    char name[50];
    int age;
    float grades[5];
};

int main(){

    int n = 20;
    struct Student *class = (struct Student *)malloc(n * sizeof(struct Student));

    class[0].age = 20;
    strcpy(class[0].name, "Danny3ec");
    class[0].grades[0] = 100.0;
    class[0].grades[1] = 80.0;

    for (int j = 0; j < 20; j++){
        printf("nName: %s, Age: %d", class[j].name, class[j].age);
    
    for (int i = 0; i < 5; i++){
        printf("\n\tGrade:%d = Grades[%.2f]",i, class[0].grades[i]);
    }
}

    
    return 0;
    
}


