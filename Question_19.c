//print the table of number given by user as input.
#include<stdio.h>
int main () {

    int n;
    int pro;// pro reffers to product
    
    printf("Enter number :");
    scanf("%d", &n);

    for (int i = 1; i < 10; i++)
    {
        pro = n * i;
       printf("%d x %d = %d\n", n, i, pro);
    }
    
}