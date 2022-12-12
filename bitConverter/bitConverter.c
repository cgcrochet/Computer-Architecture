#include "driver.h"

#include <stdio.h>
#include <string.h>

void bitConverter(int I, char *str) {
        // /* implement here */
        // str[32] = '\0';

        // int remainder[33] = {0};
        // int v, y;

        // for (v = 0; I > 0; v++) {
        //         remainder[v] = I % 2;
        //         I = I / 2;
        // }

        // printf("\nSize of remainder: %d\n", (sizeof(remainder)/sizeof(remainder[0])));


        // printf("Binary Number: \n");

        // for (y = (sizeof(remainder)/sizeof(remainder[0])) - 1; y >= 0; y--) {
        //         printf("%d\n", remainder[y]);
        // }

    /* implement here */
    char* ptr = &str[0];

    // Set all values in str to 0
    for (int j = 0; j < 31; j++) {
        *ptr = 0;
        ptr++;
    }

    str[32] = '\0';

    // ptr = &str[0];
    // printf("str after inserting 0's:\n");
    // for (int x = 0; x < 32; x++) {
    //     printf("%d ", *ptr);
    //     ptr++;
    // }
    // printf("\n");

    if (I < 0) {
        I = -I;
        str[0] = 1;
    }

    int v = 8;
    while (I > 0){
        str[v] = I % 2;
        I = I / 2;
        v--;
    }

    // printf("\n\nBinary representation: \n");

    // for (int k = 0; k < 31; k++) {
    //     printf("%d ", str[k]);
    // }

    // printf("\n");

    // for (int y = 31; y > 0; y--) {
    //     printf("%d ", str[y]);
    // }

    printf("\n\n");
}