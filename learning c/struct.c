#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main() {
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "CS");

    printf("%f \n", student1.gpa);

    struct Student student2;
    student2.age = 23;
    student2.gpa = 4.2;
    strcpy(student2.name, "Sim");
    strcpy(student2.major, "CSE");

    printf("%f", student2.gpa);

    return 0;
}