/**
 * 1-13.c
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging
 */

/**
 * ==== HISTOGRAM =======
 * |================   | 01
 * |=============      | 02
 * |============       | 03
 */

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_BAR_LENGTH 40

void main() {
    int total = 0, nword = 0, lengths[25];
    int state = OUT;
    char c;

    // Init array elements to zero
    for (int i = 0; i < 25; ++i)
        lengths[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            // End of word
            if (state == IN)
                state = OUT;
            // Add word at index of length of word
            ++lengths[nword];
            ++total;
            nword = 0;
        } else {
            if (state == OUT)
                state = IN;
            // Increment word length
            ++nword;
        }
    }

    if (total == 0) {
        printf("There is no input\n");
        return;
    }

    // TODO: Print the histogram
    for (int i = 0; i < 25; ++i) {
        printf("%2d ", i);
        putchar('|');
        // (total / count of lengths) * 20
        int barlength = (lengths[i] * MAX_BAR_LENGTH / total);
        for (int i = 0; i < MAX_BAR_LENGTH; ++i) {
            if (i < barlength) {
                putchar('=');
            } else {
                putchar(' ');
            }
        }
        putchar('|');
        printf(" %2d\n", lengths[i]);
    }

    // DEBUG
    /*for (int i = 0; i < 25; ++i) {*/
    /*    printf("%2d -> [%2d]\n", i, lengths[i]);*/
    /*}*/
    /*printf("Total: %d\n", total);*/
}
