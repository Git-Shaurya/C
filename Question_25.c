//Print the reverse of the table for a number n.
#include<stdio.h>
int main () {

    int x;
    
    printf("Enter number :");
    scanf("%d", &x);

    for (int i = 10; i >= 1; i--)
    {
       printf("%d\n", x*i);
    }
    
}