#include<stdio.h>

void square (int n);

int main() {
    int number = 4;
    
    square(number);
   
    printf("The number is :%d", number);

}

void square (int n){

    n = n * n;
    printf("%d\n", n); 
}
//here we pass the value of variable as an argument.