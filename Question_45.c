//create a 2d array, storing the tables of 2 & 3.
 #include<stdio.h>
 int main() {

    int arrtable[2][10];

    for (int i = 0; i < 10; i++)
    {
        arrtable[0][i] = 2 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        arrtable[1][i] = 3 * (i + 1);
    }
    

   printf("Table of 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arrtable[0][i]);
    }

    printf("\n\nTable of 3:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arrtable[1][i]);
    }
    
    
 }