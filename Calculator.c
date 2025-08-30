// calculator of 2 numbers

#include<stdio.h>
int main() {
    int a, b, operator;

    printf("Enter 1st Number : ");
    scanf("%d", &a);

    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    printf("Select operation (+ is 1 , - is 2 , * is 3 , / is 4): ");
    scanf("%d", &operator);

    if (operator == 1) {
        printf("%d\n", a + b);
    }
    else if (operator == 2) {
        printf("%d\n", a - b);
    }
    else if (operator == 3) {
        printf("%d\n", a * b);
    }
    else if (operator == 4) {
        if (b == 0) {
            printf("Error: Division by zero not allowed.\n");
        } else {
            // use float for proper division
            float result = (float)a / b;
            printf("%f\n", result);
        }
    }
    else {
        printf("Invalid operator choice.\n");
    }

    return 0;
}
