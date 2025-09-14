// Print factorial of a number given by user
#include <stdio.h>
int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);

    int pro = 1;
    for (int i = 1; i <= x; i++) {
        pro = pro * i;  // multiply by i, not x
    }

    printf("Factorial is: %d\n", pro);
    return 0;
}
