#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter a number ");
    scanf("%d", &a);

    for (int i = 1; i < a; i++)
    {
       if (i % a == 0)
       {
        printf("The number is composite");
       }
       else(printf("The number is prime"));
    }
    
}