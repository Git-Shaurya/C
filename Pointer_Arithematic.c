//here we will see how to increment and decrement a pointer.

#include<stdio.h>
int main() {

    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);// here the value that will be printed will be before increment 
    ptr++;//increment happens that is 4 bytes of memory gets added.

    printf("incremented adress :%u\n", ptr); // this will print the added memory adress.

    ptr--;
    printf("decremented adress :%u\n", ptr); // this will print the subtracted  memory adress.




    // here what happens is in ptr the adress of age gets stored and when we add 1 to the ptr , the byte size of the datatype gets added to the adress stored in ptr. for exapmple if in ptr the value stored is 1000, so adding 1 to it means adding 4 bytes so the value becomes 1004.

}