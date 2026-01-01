//make a program that inputs user's name and prints its length.

#include <stdio.h>

int countlength(char arr[]);

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin); // takes the name including spaces
    printf("Length of your name is: %d\n", countlength(name));
    return 0;
}

int countlength(char arr[]) {
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    // fgets() adds a newline before '\0' if there's room, so remove it
    if (count > 0 && arr[count - 1] == '\n') {
        count--;
    }

    return count;
}
