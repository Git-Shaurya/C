#include <stdio.h>

int main() {
    int companies, atleastOne;
    int rhs = 0;

    printf("Enter number of companies: ");
    scanf("%d", &companies);
// will take input
    printf("Enter number of users who found at least 1 ad useful: ");
    scanf("%d", &atleastOne);

    int exactly[companies + 1];  

    for (int k = 2; k <= companies; k++) {
        printf("Enter number of users who found exactly %d ads useful: ", k);
        scanf("%d", &exactly[k]);
        rhs += exactly[k];  // ask for users who liked 2,3,4,... etc adds.
    }

    // calculate users who liked exactly 1 ad
    int exactly1 = atleastOne - rhs;
    exactly[1] = exactly1;
    rhs += exactly1;

    printf("\n--- Results ---\n");
    printf("Users who liked at least 1 ad (LHS) = %d\n", atleastOne);

    for (int k = 1; k <= companies; k++) {
        printf("Users who liked exactly %d ads = %d\n", k, exactly[k]);// calculate users who liked one add
    }

    printf("Sum of users who liked exactly 1..%d ads (RHS) = %d\n", companies, rhs);

    // consistency checks
    if (exactly1 < 0) {
        printf("Data is NOT consistent (exactly 1 ads became negative)\n");
    } else if (atleastOne != rhs) {
        printf("Data is NOT consistent (LHS ≠ RHS)\n");
    } else {
        printf("Data is consistent (LHS = RHS)\n");
    }

    return 0;
}
