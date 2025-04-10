// Exercise 1-14: Write a program to print a histogram of the frequencies
// of different characters in its inputs. This exercise teaches how to 
// analyze character input, count occurrences of each character, and 
// visually represent this data in the form of a histogram. It helps 
// develop skills in handling arrays, loops, and conditional statements 
// in C programming.

#include <stdio.h>

int main(){
    int c, i, j, histogram_height, actual_height;
    int letters[255];
    for (i = 0; i < 255; i++){
        letters[i] = 0;
    }

    while((c = getchar()) != EOF){
        ++letters[c];
    }

    // Horizontal histogram
    for (i = 33; i < 126; i++){
        printf(" %c |", i);
        for (j = 0; j < letters[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}