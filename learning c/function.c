#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age) 
{
    printf("Hello %s, you are %d", name, age);
}

int main()
{
    sayHi("Prakhar", 20);
    return 0;
}

