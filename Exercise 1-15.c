#include <stdio.h>
#include <stdlib.h>

/*
1-15 Rewrite the temperature conversion program of section 1.2 to use a function for conversion.
*/

/*print Fahrenheit- celsius table
    for fahr = 0, 20, .... 300 */

//converts F to C
float calcC(float f){
    return (5.0/9.0) * (f-32.0);
}

//converts C to F
float calcf(float c){
    return c * (9.0/5.0) + 32;
}

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit
    step = 20;      //step size

    printf("Fahrenheit to Celsius calculator\n");

    printf("*F\t*C\n");
    fahr = lower;
    while (fahr <= upper){
        printf("%3.0f\t%3.1f\n", fahr, calcC(fahr));
        fahr = fahr + step;
    }

    fahr, celsius = 0;

    printf("\n\n\nCelsius to Fahrenheit calculator\n");
    printf("*C\t*F\n");
    celsius = lower;
    while (celsius <= upper){
        printf("%3.0f\t%3.1f\n", celsius, calcf(celsius));
        celsius = celsius + step;
    }

    return 0;
}
