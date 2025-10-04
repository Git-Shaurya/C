#include<stdio.h>

// Function to calculate the n-th Fibonacci number recursively
int fib (int n);

int main () {
   
   printf("The nth Fibonacci term  is: %d\n", fib(6)); 

   return 0;
}

// Function now correctly calculates the n-th Fibonacci term
int fib (int n) {

    // Base Case 1: F(0) = 0
    if (n == 0)
    {
       return 0;
    }
    
    // Base Case 2: F(1) = 1
    if (n == 1)
    {
        return 1;
    }
    
    // Recursive Step: F(n) = F(n-1) + F(n-2)
    // This is the CRITICAL change: making recursive calls.
    return fib(n-1) + fib(n-2);
}
