/**
 * 1-12.c
 * Write a program that prints its input one word per line
 */
#include <stdio.h>
#define IN 1
#define OUT 0

void main() {
    char c;
    int state;

    while ((c = getchar()) != EOF) {
        // Skip all whitespaces
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                // Print newline after end of word
                putchar('\n');
            }
        }
        // Print the rest
        else {
            state = IN;
            putchar(c);
        }
    }
}
