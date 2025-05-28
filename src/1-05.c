/**
 * 1-5.c
 *
 */
#include <stdio.h>

void main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 300; /* lower limit of temperatuire scale */
    upper = 0;   /* upper limit */
    step = 20;   /* step size */

    printf("--- Temperature converter ---\n");

    fahr = lower;
    while (fahr >= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}
