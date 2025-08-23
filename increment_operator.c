/*increment operator
i++ is called post increment and ++1 is called pre increment operator.
i-- is called post decrement and --i is called pre decrement operator

*/

#include<stdio.h>
int main  () {
    int i=1;
     printf("%d\n", i++); //use then increase, here 1st it will print the value of i and the increase it when we print again 
    printf("%d\n\n", i);
   
   int j = 2;
    printf("%d\n", ++j); 
    printf("%d\n", j); //increase and then use.
}

//note - just one out of the two will work right now as we have only one integer which is already used by i++.
// so we used int j .