// Exercise 1-12: Write a program that prints its input one word per line.
// This exercise helps to understand how to process input character by character,
// identify word boundaries, and manage output formatting. It teaches the importance
// of handling different types of whitespace and demonstrates basic control structures
// in C programming.

#include <stdio.h>

int main(){
    int c, previous_c;

    while ((c = getchar()) != EOF){
        if (c == '\n' || c == '\t' || c == ' '){
            if (previous_c != '\n' && previous_c != '\t' && previous_c != ' ')
                putchar('\n');
        }
        else
            putchar(c);

        previous_c = c;
    }
}