//write a fucntion to count the number of odd numbers in an array.
#include<stdio.h>

void odd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    odd(arr, 6);
}

void odd(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {   // check if element is odd
            count++;
        }
    }

    printf("Number of odd elements: %d\n", count);
}
