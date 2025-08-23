#include<stdio.h>
int main () {

    int x, y, z;
    printf("Enter Number 1 :");
    scanf("%d", &x);

    printf("Enter Number 2 :");
    scanf("%d", &y);

    printf("Enter Number 3 :");
    scanf("%d", &z);

    if (x > y) {
        if (x > z) {
            printf("X is largest\n");
        } else {
            printf("Z is largest\n");
        }
    } else { 
        if (y > z) {
            printf("Y is largest\n");
        } else {
            printf("Z is largest\n");
        }
    }

    return 0;
}
