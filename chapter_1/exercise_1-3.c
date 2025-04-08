// Exercise 1-3: Write a program to convert Fahrenheit to Celsius. 
// This exercise helps you understand how to use loops and arithmetic operations in C.

#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("----------------------\n");
    printf("FAHR   \tCELSIUS\n");
    printf("----------------------\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}