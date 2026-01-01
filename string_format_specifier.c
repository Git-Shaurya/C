#include<stdio.h>
int main () {

    char name[]= "Shaurya";
    printf  ("%s", name); // here %s is the format specifier to print the string directly.

    char name2[40];
    scanf("%s", name2); //here we dont use '&' cause name is a pointer.
}