//Print a right-angled triangle of *. (inverted)
#include<stdio.h>
int main () {
    int x;
    printf("Enter the number of rows: ");
    scanf("%d", &x);

   for (int i = x; i >= 1; i--) //rows
   {
    for (int j = 1; j <= i ; j++) // colums 
    {
        printf("*");
    }
    printf("\n");
   }
   
    
}