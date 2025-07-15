#include<stdio.h>

int main() {

// and operations (&&)

    printf("%d\n", 4 > 3 && 5>2); //now this "&&" means that when both condtions will be true of 4,3 and 5,2 then only the output will be printed as true pr else false.


    printf("%d\n", 4 > 3 && 5 < 3); //here it will be false.

// or operations (||)



    printf("%d\n", 4 < 3 || 5>3); //here || means "or" so if even of the statements it true it will print as true. the only secen where it ca print a false is when both statemetns are wrong. 
 

// not operation (!)    

  
   printf("%d\n",  !(4 < 3) ); // here the result should be false but because we have used ! so it will remeber the operation.

}

