// Exercise 1-11: This exercise aims to explore the functionality of a word count program, 
// teaching how to accurately count lines, words, and characters in a given input. 
// It emphasizes the importance of testing with various input types, such as 
// empty inputs, inputs with multiple spaces, and different newline characters, 
// to uncover potential bugs and ensure the program handles all edge cases effectively.

// My test cases: Empty inputs, tabs, spaces, multiple spaces, escape sequences

#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word

int main(){
    int c, n1, nw, nc, state;

    state = OUT;
    n1 = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++n1;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", n1, nw, nc);

    return 0;
}