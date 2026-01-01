#include<stdio.h>

struct student
{
   int roll;
   float cgpa;
   char name[100];
};

int main(){

    struct student s1 = {30, 9.0 , "Shaurya"};

    struct student *ptr = &s1;
    printf("Student roll number = %d\n", (*ptr). roll);

    
    printf("Student -> roll = %d\n", ptr -> roll );// shortcut to print
    printf("Student -> name = %s\n", ptr -> name );
    printf("Student -> cgpa = %f\n", ptr -> cgpa );
}