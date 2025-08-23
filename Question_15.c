//Print factorial of n. write code for c
#include<stdio.h>
int main () {

    int n; 
    long long fact = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

   if (n < 0)
   {
    printf("Factorial cannot be dertermind :");
   } else {
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial is: %lld", fact);
    
   }
  
   
   
   
   
    

}