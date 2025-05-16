// Exercise 1-15: This exercise involves rewriting the temperature conversion program to utilize a function for converting Fahrenheit to Celsius. 
// This exercise teaches how to define and use functions in C, promoting code reusability and modular programming.

#include <stdio.h>

float fahr_to_celsius(float fahr){
    float celsius;

    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}

int main(){
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        printf("%3.0f %6.1f\n", fahr, fahr_to_celsius(fahr));
        fahr = fahr + step;
    }

    return 0;
}
