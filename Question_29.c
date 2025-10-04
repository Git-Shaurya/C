//Write a function that prints Namaste if the user is Indian and Bonjour if the user is french
#include<stdio.h>
void printn();
void printb();

void printn () {
printf("Namaste");
} // its okay to write this over here instead of at ending of code.
void printb () {
printf("Bonjour");
}


int main () {

  char ch;
   
    printf("Enter Nationality ( I for Indian and F for french)");
    scanf("%c", &ch);

    if (ch == 'I' || ch =='i')
    {
        printn();

    } else if (ch == 'F'|| ch == 'f')
    {
        printb();
    }
    
    
}


