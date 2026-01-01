//struct student IT[100];
// HERE THE FORMAT IS "data type" "variable name" "quantity "

// the way to access this is that 
//IT[0]. roll
//IT[0]. CGPA 

#include<stdio.h>
#include<string.h>

struct student
{
   int roll;
   float cgpa;
   char name[100];
};

int main() {

    struct student IT[100];
    IT[0]. roll = 30;
    IT[0]. cgpa = 9.2;
    strcpy(IT[0]. name, "Shaurya");

    printf("Name is: %s\n", IT[0]. name);
    printf("Roll number is :%d\n", IT[0]. roll);
    printf("CGPA is :%f\n ", IT[0]. cgpa);
    

    
}