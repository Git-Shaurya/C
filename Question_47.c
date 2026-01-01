//ask the user to enter their firstname & print it back to them . also try this with there full name.

#include <stdio.h>
#include <string.h>

void takeinput1(char firstname[]);
void takeinput2(char lastname[]);
void output(char firstname[], char lastname[]);

int main() {
    char firstname[50];
    char lastname[50];

    takeinput1(firstname);
    takeinput2(lastname);
    output(firstname, lastname);

    return 0;
}

void takeinput1(char firstname[]) {
    printf("Enter firstname: ");
    scanf("%49s", firstname);
}

void takeinput2(char lastname[]) {
    printf("Enter lastname: ");
    scanf("%49s", lastname);
}

void output(char firstname[], char lastname[]) {
    printf("Your full name is: %s %s\n", firstname, lastname);
}




