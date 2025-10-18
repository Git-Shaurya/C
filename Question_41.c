//swap 2 numbers a and b.

#include <stdio.h>
void swap (int a, int b);
void _swap (int *a, int *b);

int main () {

    int x = 3;
    int y = 5;
    _swap(&x , & y);
    printf("x = %d & y = %d\n", x, y);


   
}

//call by reference
void _swap (int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
   

}
