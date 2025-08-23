//Count digits in a number. code in c
#include<stdio.h>
int main () {

    int x;
    int count = 0;

    printf("Enter number :");
    scanf("%d", &x);

    if (x == 0) {
        count = 1;
    } else { if (x < 0)
    {
        x = -x;
    }
    while (x > 0)
    {
       x = x /10;
       count++;
    }
    
    }
     printf("Number of digits = %d\n", count);
    
    
}