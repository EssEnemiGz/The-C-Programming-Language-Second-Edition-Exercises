// Exercise 1-9: Write a program to copy its input to its output,
// replacing each string of one or more blanks by a single blank.
// This exercise helps you understand how to process input and manage whitespace,
// specifically by replacing multiple consecutive blanks with a single blank.

#include <stdio.h>

int main(){
    int c;
    int last_char = '\0';

    while ((c = getchar()) != EOF){
        if (last_char != ' ' || c != ' '){
            putchar(c);
        } 
        
        last_char = c;
    }

    return 0;
}