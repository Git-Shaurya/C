//Write a program to enter price of 3 items & print their final cost with gst.
#include<stdio.h>
int main (){

    float arrprice[3];
    printf("Enter the three prices : ");
    scanf("%f", &arrprice[0]);
    scanf("%f", &arrprice[1]);
    scanf("%f", &arrprice[2]);

    printf("Total price of 1st product is : %f\n", arrprice[0] + (arrprice[0] *0.18));
    printf("Total price of 2nd product is : %f\n", arrprice[1] + (arrprice[1] *0.18));
    printf("Total price of 3rd product is : %f\n", arrprice[2] + (arrprice[2] *0.18));
}