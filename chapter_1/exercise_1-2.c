// Exercise 1-2: Experiment to find out what happens when printf's argument string contains \c, where c
// is some character not listed above. 
// This exercise helps understand how printf handles invalid escape sequences.

#include <stdio.h>

int main(){
    printf("Hello, World\c");
    return 0;
}