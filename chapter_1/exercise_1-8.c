// Chapter 1: Exercise 1-8. 
// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main(){
    int blanks, tabs, newlines, c;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    
    while((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        } else if (c == '\t'){
            ++tabs;
        } else if (c == '\n'){
            ++newlines;
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d", blanks, tabs, newlines);
    return 0;
}