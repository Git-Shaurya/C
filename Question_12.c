//Write a program to check if a number is natural or not.
#include<stdio.h>
int main() {

    int num;
    printf("Enter number :");
    scanf("%d", &num);
    
    if (num >= 1)
    {
       printf("Your number is natural");
    }
    else (printf("Your number is not natural"));
}