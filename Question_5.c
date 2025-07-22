//Write a program to print average of 3 numbers. 

#include<stdio.h>
int main () {

   int a, b, c;
   printf("Enter the 1st numbers:");
   scanf("%d", &a);

   printf("Enter the 2nd numbers:");
   scanf("%d", &b);

   printf("Enter the 3rd numbers:");
   scanf("%d", &c);
   
   int sum = a + b + c;
   int avg = sum / 3;
    printf("%d", avg);

}