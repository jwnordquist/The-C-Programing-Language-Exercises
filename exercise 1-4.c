#include <stdio.h>
#include <stdlib.h>

/*print Fahrenheit- celsius table
    for fahr = 0, 20, .... 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of tempature table
    upper = 300;    //upper limit
    step = 20;      //step size

    printf("Fahrenheit to Celsius calculator\n");

    printf("*F\t*C\n");
    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%3.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr, celsius = 0;

    printf("\n\n\nCelsius to Fahrenheit calculator\n");
    printf("*C\t*F\n");
    celsius = lower;
    while (celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f\t%3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }



    return 0;
}
