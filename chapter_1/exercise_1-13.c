// Exercise 1-13: This exercise involves writing a program to print a histogram of the lengths of words in its input. 
// It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
// This exercise teaches how to handle user input, count words, and visually represent data in the form of a histogram. 

#include <stdio.h>

int main(){
    int c, i, j, word_size, highest_number, previous_value, histogram_height, actual_height;
    int ndigit[9];
    word_size = 0;

    for (i = 0; i < 9; i++){
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (word_size > 0 && word_size <= 9) {
                ++ndigit[word_size - 1];
            } else ++ndigit[0];
            word_size = 0;
        } else if (c == '\b') continue;
        else 
            ++word_size;
    }

    // Vertical histogram
    // Find the highest number in the array
    highest_number = 0;
    histogram_height = 0;
    previous_value = 0;
    for (i = 0; i < 9; i++){
        if (ndigit[i] > previous_value){
            highest_number = i+1;
            previous_value = ndigit[i];
        } 

        if (ndigit[i] > histogram_height)
            histogram_height = ndigit[i];
    }

    // Print the histogram
    int printed_numbers[9];
    for (i = 0; i < 9; i++)
        printed_numbers[i] = 0;

    actual_height = histogram_height;
    putchar('\n');
    for (i = 0; i < histogram_height; i++){ // rows amount is based on hightest_number
        for (j = 0; j < 9; j++){
            if ( ndigit[j] >= actual_height || printed_numbers[j] ){
                printf(" * ");
                printed_numbers[j] = 1;
            } else 
                printf("   ");
        }
        putchar('\n');
        --actual_height;
    }

    for (i = 0; i <= 9; i++){
        printf("---");
    }

    putchar('\n');
    for (i = 1; i <= 9; i++){
        printf(" %i ", i);
    }
    putchar('\n');
    putchar('\n');

    // Horizontal histogram
    for (i = 0; i < 9; i++){
        printf(" %i | ", i+1);
        for (j = 0; j < ndigit[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    
    return 0;
}