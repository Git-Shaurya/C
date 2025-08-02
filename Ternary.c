// ternary operator is the alternate of if elseif

#include<stdio.h>
int main()

//its format is -- codition ? do this if TRUE : do this if false;

{
    int age;
   printf("Enter your age : ");
   scanf("%d", &age);

   age >= 18 ? printf("you are an adult\n") : printf("you are a minor\n");
}
