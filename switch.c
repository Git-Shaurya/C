#include<stdio.h>
int main () {

    int day;
    printf("Enter day ( 1 to 7)");
    scanf("%d", &day);

    switch (day) {

        case 1 : printf("Monday");
             break;
        case 2 : printf("Tuesday");
             break;     
        case 3 : printf("Wednesday");
             break;
        case 4 : printf(" Thursday");
             break;
        case 5 : printf("Friday ");
             break;
        case 6 : printf("Saturday");
             break;          
        case 7 : printf("Sunday");
             break;     
         default : printf("Invalid day");
             break;
     

    } // the same goes for entering charachters . just replace int with char and %d with %s and the numbers with aplhabets.

    //SWITCH inside switch is allowed. This can be done for if else statemetns as well. and is called as nested switch or nested if else statements.
    
    return 0;
    
}