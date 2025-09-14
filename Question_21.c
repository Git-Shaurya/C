//"Keep taking numbers as input from user until user enters a number which is multiple of 7."

#include <stdio.h>
int main() {
    int x;
    do {
        printf("Enter Number: ");
        scanf("%d", &x);
        printf("%d\n", x);

        if (x % 7 == 0) {   // check multiple of 7
            break;
        }

    } while (1);

    printf("Thank you\n");
    return 0;
}
