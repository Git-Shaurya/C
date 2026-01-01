#include<stdio.h>

int main() {

    FILE *fp;
    fp = fopen("file.txt", "r");

    if (fp == NULL )
    {
       printf("File dosent exists.");
    }
    else
    {
        fclose(fp);
    }
     
    
    

    
}


//r - read
// rb - open to read in binary
// w - open to write
//wb - open to write in binary 
//a - open to append 