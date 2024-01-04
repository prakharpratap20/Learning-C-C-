#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charName[] = "Prakhar";
    int charAge = 20;
    printf("There once was a man named %s\n", charName);
    printf("He was %d years old.\n", charAge);

    charAge = 21;
    printf("He really liked the name %s\n", charName);
    printf("But did not like being %d.\n", charAge);
    return 0;
}