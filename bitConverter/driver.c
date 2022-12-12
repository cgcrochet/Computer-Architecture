#include "bitConverter.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

    char str[33];
    
    srand(time(0)); // Seed of rand

    float myFloat = (float)rand(); // Generates numbers in range of [0, RAND_MAX)
    int myInt = (rand() % (255 + 1));

    int decider = (rand() % (2));

    printf("Decider: %d\n\n", decider);

    if (decider < 0.5) {
        myInt = -myInt;
        myFloat = -myFloat;
    }

    printf("myFloat: %f\n", myFloat);
    printf("myInt: %d\n", myInt);
    
    // int v;

    // printf("str before conversion to 0's: \n");
    // for (v = 0; v < 33; v++) {
    //     printf("%d ", str[v]);
    // }
    printf("\n");


    bitConverter(myInt, str);

    // printf("\nLast value in string%c\n", str[32]);
    // printf("\nChecking if str has a 34th value %c\n", str[33]);

    int j;
    printf("Binary at end: \n");
    for (j = 0; j < 31; j++) {
        printf("%d ", str[j]);
    }

    printf("\n\n");

}