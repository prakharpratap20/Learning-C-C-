#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    if (result > num3) {
        return result;
    } else {
        return num3;
    }
}


int main() {
    printf("%d", max(200, 50, 25));
    return 0;
}