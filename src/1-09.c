/**
 * 1-9.c
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank
 */
#include <stdio.h>

void main() {
    char c, cur, next;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            while ((c = getchar()) == ' ') {
                // Do nothing
            }
            putchar(c);
        } else {
            putchar(c);
        }
    }
}
