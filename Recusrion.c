//when a function calls itself 
// print hello world 5 times.
#include<stdio.h>
void printHW(int n);


int main () {
 printHW(5);
}

void printHW(int n){
    if (n == 0 )
    {
       return;
    }
    printf("Hello world\n");
    printHW( n - 1 );
    
}