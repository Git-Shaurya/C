#include<stdio.h>

int main() {

    FILE *fp;
    fp = fopen("file.txt", "r");

    char ch;
    fscanf(fp,"%c", &ch);// here fp is the file pointer , %c is the format specifer and &ch is the adress to store in. 
    printf("%c", ch);

    fscanf(fp,"%c", &ch);
    printf("%c", ch);

      fscanf(fp,"%c", &ch);
    printf("%c", ch);


      fscanf(fp,"%c", &ch);
    printf("%c", ch);


      fscanf(fp,"%c", &ch);
    printf("%c", ch);
    //here we repeated the process 5 times cause every time the value of ch will get over written and will print a new alphabet


    
     
    fclose(fp);
     
}