//print number from zero to n where n is given by user.

#include<stdio.h>
int main() {
int n;
printf("Enter number :");


scanf("%d", &n);
printf("The numbers are :\n");
for (int i = 0; i < n; i++)
{
   printf("%d\n", i);
}

}