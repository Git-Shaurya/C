// we have to store marks of two students and 3 subjects


#include<stdio.h>
int main() {

    //2 x 3

    int marks [2][3] ; //_ _ _ | _ _ _
    marks[0][0] = 90;
    marks [0][1] = 80;
    marks [0][2] = 70;

    marks[1][0] = 90;
    marks [1][1] = 80;
    marks [1][2] = 70;

   for (int i = 0; i < 2; i++) {       // rows
    for (int j = 0; j < 3; j++) {   // columns
        printf("%d ", marks[i][j]); // print the element
    }
    printf("\n"); // new line after each row
}

}