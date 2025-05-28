/**
 * 1-14.c
 * Write a program to print a histogram of the frequencies of different
 * characters in its input
 */

/**
 * ==== HISTOGRAM =======
 * |================   | 01
 * |=============      | 02
 * |============       | 03
 */

/**
 * NOTE: This program is currently limited to lowercase letters
 */

#include <ctype.h>
#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_BAR_LENGTH 40

void main() {
    int max = 0, letterfreq[26];
    char c;

    // Init array elements to zero
    for (int i = 0; i < 26; ++i)
        letterfreq[i] = 0;

    while ((c = getchar()) != EOF) {
        char lower = tolower(c);
        if (c == ' ' || c == '\n' || c == '\t') {
            // End of word
        } else if (lower >= 'a' && lower <= 'z') {
            ++letterfreq[lower - 'a'];
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (letterfreq[i] >= max)
            max = letterfreq[i];
    }

    if (max == 0) {
        printf("There is no input\n");
        return;
    }

    // TODO: Print the histogram
    printf("\n----------- HISTOGRAM -----------\n");
    for (int i = 0; i < 26; ++i) {
        printf("%c ", 'a' + i);
        putchar('|');

        int barlength = (letterfreq[i] * MAX_BAR_LENGTH / max);
        for (int i = 0; i < MAX_BAR_LENGTH; ++i) {
            if (i < barlength) {
                putchar('=');
            } else {
                putchar(' ');
            }
        }

        putchar('|');
        printf(" %2d\n", letterfreq[i]);
    }

    // DEBUG
    /*for (int i = 0; i < 26; ++i) {*/
    /*    printf("%c -> [%2d]\n", 'a' + i, letterfreq[i]);*/
    /*}*/
}
