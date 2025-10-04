//write a code to find the price with gst and take the price from user and write the code with a funcation.
#include<stdio.h>

void calprice(float price);

void calprice(float price) {
     price = price + (0.18 * price);
     printf("The final price is = %f", price);
   
}

int main () {
    float price;
   printf("Enter float value : \n");
   scanf("%f", &price);

   calprice(price);printf("\n");
   printf("The value is : %f\n", price); //here when we print the outcome we will get as 100 also becuase no matter how much we alter the value in funtion but here the value will be printed as it is.
}