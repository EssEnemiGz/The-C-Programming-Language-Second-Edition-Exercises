#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("----------------------\n");
    printf("CELSIUS\tFAHR\n");
    printf("----------------------\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.1f\t%6.0f\n", celsius, fahr);
        fahr = fahr + step;
    }

    return 0;
}