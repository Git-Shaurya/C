//Write a code to detect if the entered charachter is Capital or small.
#include<stdio.h>
int main () {
    char ch;
    printf("Enter charachter :");
    scanf("%c", &ch);

   if ( ch >= 'A' && ch <= 'Z' ){
    printf("The aplhabet is Upper Case");
   }

   else if ( ch >= 'a' && ch <= 'z') {
    printf("The aplhabet is Small Case");
    }

    else { printf("Not valid");
    }
    


}