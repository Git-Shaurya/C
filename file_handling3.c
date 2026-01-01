#include<stdio.h>

int main() {

    FILE *fp;
    fp = fopen("test.txt", "w");

    // printf("%c\n", fgetc(fp));
    // printf("%c\n", fgetc(fp));
    // printf("%c\n", fgetc(fp));
    // printf("%c\n", fgetc(fp));
    // printf("%c\n", fgetc(fp));
    // printf("%c\n", fgetc(fp));
    // printf("%c\n", fgetc(fp));
   
    
    // fprintf(fp, "%c", 'S');
    // fprintf(fp, "%c", 'h');
    // fprintf(fp, "%c", 'a');
    // fprintf(fp, "%c", 'u');
    // fprintf(fp, "%c", 'r');
    // fprintf(fp, "%c", 'y');
    // fprintf(fp, "%c", 'a');    
 
    fputc('M', fp);
    fputc('a', fp);
    fputc('n', fp);
    fputc('g', fp);
    fputc('o', fp);

   
    
     
    fclose(fp);
     
}