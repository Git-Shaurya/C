//write a program to check if the student passes or fails using switch case. more that 30 is passing criteria

#include<stdio.h>
int main () {

    int marks;
    printf("Enter marks (0 to 100):\n ");    
    scanf("%d", &marks);

    switch ( marks > 30)
    { case 1 : printf("Student has passed");
        break;
      case 0 : printf("Student has failed");
        break;
    }

    // the enitre code can be written with if else statements as well. 
    
    /*#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0 to 100): ");
    scanf("%d", &marks);
  
    if (marks < 0 || marks > 100) {
        printf("Marks are not valid\n");
    }
    else if (marks <= 30) {
        printf("You have failed\n");
    }
    else {
        printf("You have passed\n");
    }

    return 0;
}
*/

}