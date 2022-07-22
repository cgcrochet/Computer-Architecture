#include <math.h>
#include <stdio.h>
#include <string.h>

void int2bitstr(int I, char *str) {
        str[32] = '\0';

        for (int i = 31; i >= 0; i--) {
                unsigned int bit = I & 1; //Bitwise AND comparison between integer a
                if (bit == 0)
                        str[i] = 0; // Add rightmost bit to string
                else
                        str[i] = 1;
                I >>= 1;
        }
        
        
        // char* ptr = &str[0];

        // // Set all values in str to 0
        // for (int j = 0; j < 31; j++) {
        //         *ptr = 0;
        //         ptr++;
        // }

        // str[32] = '\0';

        // if (I < 0) {
        // I = -I;
        // str[0] = 1;
        // }

        // int v = 8;
        // while (I > 0){
        //         str[v] = I % 2;
        //         I = I / 2;
        //         v--;
        // }

        // for (int k = 0; k < 31; k++) {
        // printf("%d", str[k]);
        // }
}

int get_exp_value(float f) {
        unsigned f2u(float f);
        unsigned int ui = f2u(f);
        
        ui = ui << 1;
        ui = ui >> 23;

        if (ui == 0)
                return 1 - 127;
        else if (ui == 255)
                return ui - 127;
        else
                return ui - 127;
        
        /* implement here */

        // int exponent;
        // frexpf(f, &exponent);
        // return exponent;

        

}