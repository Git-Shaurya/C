//asigning all the quatnties in just one go .

//struct student s1 = {"Shaurya", 30, 9.0};
//struct student s2 = {"Atharva", 1, 8.0};

#include<stdio.h>
#include<string.h>
 
struct student
{
   int roll;
   float cgpa;
   char name[100];
};

int main(){

    struct student s1 = {30, 9.0 , "Shaurya"};
}