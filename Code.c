#include <stdio.h>
#include <math.h>

int main() {

    printf("Hello World \n"); // here \n is used to crete a line.

    int age = 18;
    float pi = 3.14;
    char hashtag = '#'; // here symbols like # are to be displayed with the help of ''.


    printf("age is %d \n",age); //here %d is used which will be replaced by age and \n is used to create line. also %d is used for intergers

    printf("value of pi is %f \n", pi); //%f is used for float variable
 
   scanf("%d", &age);//scanf is used to take user input . %d tells us the data type which over hear is integer. and age is what we have to take in. also using & is required as it tells the adress where age is to be stored.


   int b, c; 
   int power = pow(b,c); //this is to use b to the power c and to use this we need to give a head file named include <math.h>.
   printf("%d\n", power);

  printf("%d\n", 3%2);




}