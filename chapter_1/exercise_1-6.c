// Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
// This exercise verifies that the expression getchar() != EOF evaluates to either 0 (false) or 1 (true), 
// demonstrating how input from the user can be checked for end-of-file (EOF) conditions.

#include <stdio.h>

int main(){
    printf("Expression: %i", getchar() != EOF);
    return 0;
}