#include<stdio.h>
int main(){

    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age == 18)
    {
        printf("You can apply.");
    }
    
    if (age == 19)
    {
        printf("You can apply");
    }
    
    if (age == 20)
    {
        printf("You cannot apply ");
    }
    
}
// the con of this code is that if the user gives input of any other age than 18 to 20 there will be no outcome. so to do that . 18 <= age <= 20