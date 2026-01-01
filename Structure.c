//a collection of values of different data types.

#include<stdio.h>
#include<string.h>// for line s1. name = "atharva"

struct student
{
   int roll;
   float cgpa;
   char name[100];
};

int main() {

   struct student s1;
   s1. roll = 30;
   s1. cgpa = 9.0;
   // s1. name = "Atharva";
   strcpy(s1.name, "Shaurya");

   printf("Student name = %s \n", s1. name);
   printf("Student roll number = %d \n", s1. roll);
   printf("Student cgpa  = %f \n", s1. cgpa);

   

    
   
   
}