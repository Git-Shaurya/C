#include<stdio.h>
int main () {
    int arrmarks[3];
    
    printf("Enter marks of physics : ");
    scanf("%d", &arrmarks[0]);

    printf("Enter marks of maths : ");
    scanf("%d", &arrmarks[1]);

    printf("Enter marks of chemistry : ");
    scanf("%d", &arrmarks[2]);        

    printf("marks of physics , chem and maths are : %d %d %d", arrmarks[0], arrmarks[1], arrmarks[2]);
   
}