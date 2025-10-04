//factorial of n using recursion
#include<stdio.h>

int fact (int n);

int main () {
printf("the factorial is : %d",fact(5));

}

int fact (int n) {
    if (n == 1) {
        return 1;
    }
    int Nm1fact = fact(n-1);
    int factn = Nm1fact * n;
    return factn;

}