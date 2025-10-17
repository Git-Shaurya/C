//print the value of i from its pointer to pointer.
#include<stdio.h>
int main() {


int i ;
int *ptr;
int **pptr;

ptr = &i;
pptr = &ptr;
*ptr = 5;

printf("%d\n", **youyoupptr);
}