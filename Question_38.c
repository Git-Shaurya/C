//test this code
#include<stdio.h>
int main()

{
    int *ptr;
    int x;

    ptr = &x; //here the adress of x is stored in ptr
    *ptr = 0;// stores the value zero in x as *ptr = 0 so zero is stored at the place whose adress is stored in ptr.

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

   (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
     


}