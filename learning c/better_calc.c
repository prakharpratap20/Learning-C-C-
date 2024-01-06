#include <stdio.h>
#include <stdlib.h>

void calc(double num1, double num2, char op) {
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("You can add, sub, mul or div these numbers \n");
    printf("What do you want to do?");
    scanf(" %c", &op);

    if (op == '+') {
        printf("%f", num1 + num2);
    } else if (op == '-') {
        printf("%f", num1 - num2);
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else if (op == '/') {
        printf("%f", num1 / num2);
    } else {
        printf("Invalid Operator");
    }
}

int main() {
    calc(2, 5, '+');
    return 0;
}