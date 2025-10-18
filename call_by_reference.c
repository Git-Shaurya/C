#include<stdio.h>

void square (int n);
void ssquare (int *n);

int main() {
    int number = 4;    
    square(number);
    printf("The number is :%d\n", number);

    ssquare(&number);
    printf("The address of the number is : %d", number);

}     

void square (int n){

    n = n * n;
    printf("%d\n", n); 
}

void ssquare (int *n){
*n = (*n) * (*n);
printf("%d\n", *n);
}
// we pass adress of variable as argument

