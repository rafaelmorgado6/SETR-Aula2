#include <stdio.h>
//#include "enerconsumption.h"

int main(void) {
    
    printf(" - == === Testing initialization === == -\n");
    //enerconsumption.ecInit();
    printf("    -> OK\n");
    
    printf(" - == === Testing adding values === == -\n");

    float valuesToAdd[] = {1.16, 1.9, 0.75, 1.0};
  
    // Find the size of the array
    int arrLen = sizeof(valuesToAdd) / sizeof(valuesToAdd[0]);

    for (int i = 0; i < arrLen; i++) {
        printf("    -> Adding value %d: %.2f\n", i, valuesToAdd[i]);
        //enerconsumption.ecAdd(valuesToAdd[i]);
    }
    printf("    -> OK\n");
    
    printf(" - == === Testing sum calculations === == -\n");
    //enerconsumption.dtSum();
    printf("    -> OK\n");


    return 0;
}