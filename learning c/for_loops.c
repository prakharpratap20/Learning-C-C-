#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        printf("%d\n", i);
    }
    int i;
    int arrayNums[] = {5, 6, 7, 8, 9, 10};
    for (i = 0; i < 6; i++) {
        printf("%d\n", arrayNums[i]);
    }
    
    return 0;
}