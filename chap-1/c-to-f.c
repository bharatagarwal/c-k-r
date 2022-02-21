#include <stdio.h>

main() {
    float celsius, fahrenheit;
    int upper, lower, step;

    lower = -40;
    upper = 200;
    step = 20;

    celsius = lower;

    while (celsius <= upper) {
        // celsius = (5.0 / 9.0) * (fahr - 32.0);
        fahrenheit = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius += step;
    }
}