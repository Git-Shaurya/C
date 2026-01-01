//it is basically a alternate or different name to our main name.
#include<stdio.h>

typedef struct  student 

{
   int roll ;
   float cgpa;
   char name[100];
} stu;

typedef struct computersciencestudent

{
   int roll ;
   float cgpa;
   char name[100];
} soe;


int main() {
    struct student s1;
    stu s1;

    struct computersciencestudent s2;
    soe s2;
    s2. roll = 10;
    s2. cgpa = 9.0;
    strcpy(s2.name, "shaurya");

  
   
    
}
