//a variable that stores the memory adress of another pointer.
//syntax = **pptr
#include<stdio.h>
int main(){

    float price = 100.00;
    float *ptr = &price;
    float **ptr = &ptr;
}