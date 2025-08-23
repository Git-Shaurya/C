#include<stdio.h>
int main () {

    int i = 1; // here we need to declare the variable earlier.
    while ( i <= 5)
    {
       printf("Hello World");
       i++ // here initialisation happens earlier , then condtion happens and then at last updation happens.
    }

    
}
