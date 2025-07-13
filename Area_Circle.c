#include<stdio.h>

int main() {

    float radius;
    printf("Enter Radius \n");
    scanf("%f", &radius);

    float pi = 3.14;

    float area = pi * radius * radius;

    printf("The area is : %f", area);
}