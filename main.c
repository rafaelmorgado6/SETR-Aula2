#include <stdio.h>
#include "enerconsumption.h"

int main(void) {
    
    printf(" - == === Testing initialization === == -\n");
    ecInit();
    printf("    -> OK\n\n");
    
    printf(" - == === Testing adding values === == -\n");

    float valuesToAdd[] = {1.16, 1.9, 0.75, 1.0};
  
    // Find the size of the array
    int arrLen = sizeof(valuesToAdd) / sizeof(valuesToAdd[0]);

    for (int i = 0; i < arrLen; i++) {
        ecAdd(valuesToAdd[i]);
    }

    printf("    -> OK\n\n");
    
    printf(" - == === Testing sum calculations === == -\n");
    float peak, dailyValue, dailyCost;
    dtSum(&peak, &dailyValue, &dailyCost);
    printf("    -> OK\n\n");


    return 0;
}