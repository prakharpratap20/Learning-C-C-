#include <stdio.h>
#include <stdlib.h>

int main() {
    // FILE * fpointer = fopen("employees.txt", "w");

    // fprintf(fpointer, "This is to be printed inside the file");

    FILE * fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nthis is how we can add data to the same file or basically append");

    

    fclose(fpointer);
    return 0;
}