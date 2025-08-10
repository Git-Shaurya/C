/*increment operator
i++ or ++1
*/

#include<stdio.h>
int main  () {
    int i=1;
     printf("%d\n", i++); //use then increase, here 1st it will print the value of i and the increase it when we print again 
    printf("%d\n", i); 
   

    printf("%d\n", ++i);
    printf("%d\n", i); //increase and then use.
}

//note - just one out of the two will work right now as we have only one integer which is already used by i++.