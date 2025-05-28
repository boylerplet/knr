/**
 * 1-8.c
 * Write a program to count blanks, tabs and newlines
 */
#include <stdio.h>

void main() {
    int c, blank, tab, newline;

    blank = tab = newline = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++newline;

    printf("Blanks: %d\nTab: %d\nNewlines: %d\n", blank, tab, newline);
}
