#include <stdio.h>

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
}