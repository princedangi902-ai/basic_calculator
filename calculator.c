#include <stdio.h>

int main() {
printf("this is a basic calculator\n");
int a, b;
printf("enter first number: ");
scanf("%d", &a);
printf("enter second number: ");
scanf("%d", &b);
printf("enter operation (+, -, *, /): ");
char c;
scanf(" %c", &c);
switch (c) {
    case '+':
        printf("result: %d\n", a + b);
        break;
    case '-':
        printf("result: %d\n", a - b);
        break;
    case '*':
        printf("result: %d\n", a * b);
        break;
    case '/':
        if (b != 0) {
            printf("result: %d\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid operation.\n");
}

    return 0;
}