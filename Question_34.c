//write a code to convert celcius to fahrenheit . 
#include<stdio.h>

float convertTemp (float C);

int main () {
    float f = convertTemp(0);
    printf("the fahrenheit value is :%f", f);

}

float convertTemp (float C) {

    float f = C * (9.0/5.0) + 32;
    return f;
}