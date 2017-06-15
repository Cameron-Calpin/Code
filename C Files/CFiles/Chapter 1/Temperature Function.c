/* this program calculates Fahrenheit and Celcius calling a function */

#include <stdio.h>

double temp(double f);

main() {
	int f;

    printf("Enter number in fahrenheit: ");
    scanf("%d", &f);

    printf("Temperature in Celcius: %3.0f\n", temp(f));
}

double temp(double fahr) {
    double celcius = (5.0 / 9.0) * (fahr - 32.0);
    return celcius;
}