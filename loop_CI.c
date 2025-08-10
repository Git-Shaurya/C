//To do a task again and again we use loops. They are of three types. 1) For 2) While 3) do while. 

/*work can be done by any one of the three but its important to learn all.
 1) for loop

 for (initialistion; condition; updation ) {
// do something
}

*/
#include<stdio.h>
int main() {

   //this i is called iterator or counter as it keeps track of whats going on and till what has the count reached.
   //here instead of i =i + 1 we can also write i++. this shortcut  is only applicable for i +1 and not i + 2 or so on. 
    for (int i = 1; i <= 5  ; i = i + 1)
    {
       printf("Hello World \n");
    }

   
    
}