#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
    return num * num * num;
    printf("This will never get printed");
}

int main() {
    printf("Answer: %f", cube(2));
    return 0;
}