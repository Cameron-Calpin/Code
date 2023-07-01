#include <stdio.h>

int main() {
    float cel, fahr;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    /* Banner */
    printf("Celsius to Fahrenheit Table\n");
    printf("----------------------------\n");

    cel = lower;  
    while (cel <= upper) {
        fahr = (cel * (9.0 / 5.0)) + 32.0;
        printf("%3.0f %6.1f\n", cel, fahr);
        cel = cel + step;
    }
}