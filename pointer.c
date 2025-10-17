#include<stdio.h>

int main() {
    int age = 18;
    
    int *ptr = &age; // 'ptr' stores the address of the variable 'age'

    printf("%u\n", &age);  // %u is used to print an unsigned integer (here it's showing the address of 'age')

    printf("%u\n", ptr);   // prints the value stored in 'ptr' (which is the address of 'age')

    printf("%u\n", &ptr);  // prints the address of the pointer variable 'ptr' itself
}
