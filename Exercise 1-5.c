#include <stdio.h>
#include <stdlib.h>

#define LOWER   0   //Lower limit of table
#define UPPER   300 //Upper limit
#define STEP    20  //Step size

/*
Exercise 1-5. Modify the temperature conversion program
to print the tale in reverse order, that is, from 300 degrees to 0.
*/

int main()
{
    int fahr;

    printf("Forwards\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("\n\n\nBackwards\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }


    return 0;
}
