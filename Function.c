/* Function Protoype - Syntax 1 

void printhello(); 
-------------------------------------------------------
Function Defination - Syntax 2 

void printhello() {

    printf("Hello");
}

-------------------------------------------------------
Funtion call -- Syntax 3

int main () {

printf("Hello");

return 0;
}
-------------------------------------------------------

*/

#include<stdio.h>
void printhello();//prototype

int main () {
printhello();// function call
}

void printhello() {
printf("hello\n"); //function defination.
printf("hello world\n");
}