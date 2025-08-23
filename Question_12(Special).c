//this question is not of any tutorial , its a task given to me by my maths teacher.
/*In a google advert. campaign, adds of 4 companies were surveyed with the following data.

200 users found atleast 1 add useful.
150 found exactly 2 adds useful.
102 found exactly 3 adds useful.
51 found all the adds useful.*/

#include <stdio.h>

int main() {
    int companies, atleastOne;
    int rhs = 0;

    printf("Enter number of companies: ");
    scanf("%d", &companies);

    printf("Enter number of users who found at least 1 ad useful: ");
    scanf("%d", &atleastOne);

    int exactly[companies + 1];  

    
    for (int k = 2; k <= companies; k++) {
        printf("Enter number of users who found exactly %d ads useful: ", k);
        scanf("%d", &exactly[k]);
        rhs += exactly[k]; //rhs = rhs + exactly
        
    }

    
    int exactly1 = atleastOne - rhs;
    rhs += exactly1;
    exactly[1] = exactly1;

    printf("\n--- Results ---\n");
    printf("Users who liked at least 1 ad (LHS) = %d\n", atleastOne);

    for (int k = 1; k <= companies; k++) {
        printf("Users who liked exactly %d ads = %d\n", k, exactly[k]);
    }

    printf("Sum of users who liked exactly 1..%d ads (RHS) = %d\n", companies, rhs);

    if (atleastOne == rhs)
        printf("Data is consistent (LHS = RHS)\n");
    else
        printf("Data is NOT consistent (LHS ≠ RHS)\n");

    return 0;
}
