// Exercise 1-5: Modify the temperature conversion program to print the table
// reverse order, that is, from 300 degrees to 0
// This exercise helps you understand how to modify existing programs and work with loops and arithmetic operations in C.

#include <stdio.h>

int main(){
    int fahr;

    printf("----------------------\n");
    printf("FAHR\tCELSIUS\n");
    printf("----------------------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20){
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    };
}