#include <stdio.h>

<<<<<<< HEAD
main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit Temperature Conversion\n");

    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    printf("\nCelcius Temperature Conversion\n");

    celcius = lower;

    while (celcius <= upper)
    {
        fahr = (celcius * 9 / 5) + 32;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
=======
int main() {
    printf("Hello, World!\n");
    return 0;
>>>>>>> ac1f30acb15065714a53ad4b6b2d04bf573ff09b
}