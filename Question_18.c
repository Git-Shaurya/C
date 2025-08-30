//Print the sum of first n natural numbers. Take N from user.also print the numbers in reverse.

#include<stdio.h>
int main () {

int x, sum = 0 ;
printf("Enter Number :");
scanf("%d", &x);

for (int i = 0; i <= x; i++)
{
   sum += i; // i made a mistake over here earlier by writting sum += x which should not happen as it will keep adding x over and over rather that adding i which is actually increasing like 1,2,3,4 etc
}

printf("sum is : %d\n", sum);

printf("The numbers in reverse order are :");
for (int i = x; i >= 1 ; i--){

  
    printf("%d", i);
}

}