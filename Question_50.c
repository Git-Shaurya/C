//write a program to store data of 3 students
#include<stdio.h>
#include<string.h>

struct student
{
   int roll;
   float cgpa;
   char name[100];
};

int main() {

   struct student s1;
   struct student s2;
   struct student s3;

   s1. roll = 28;
   s1. cgpa = 8.0;
   strcpy(s1.name, "Jay");


   s2. roll = 29;
   s2. cgpa = 9.0;
   strcpy(s2.name, "Ritesh");


   s3. roll = 30;
   s3. cgpa = 9.0;
   strcpy(s3.name, "Shaurya");




   printf("Student name = %s \n", s1. name);
   printf("Student roll number = %d \n", s1. roll);
   printf("Student cgpa  = %f \n", s1. cgpa);

   
   printf("Student name = %s \n", s2. name);
   printf("Student roll number = %d \n", s2. roll);
   printf("Student cgpa  = %f \n", s2. cgpa);
  

   printf("Student name = %s \n", s2. name);
   printf("Student roll number = %d \n", s2. roll);
   printf("Student cgpa  = %f \n", s2. cgpa);


    
   
   
}