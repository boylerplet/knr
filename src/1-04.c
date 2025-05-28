/**
 * 1-4.c
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */
#include <stdio.h>

/* print Celcius-Farenheit table
for fahr = 0, 20, ..., 300; floating-point version */
void main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    printf("--- Temperature converter ---\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
