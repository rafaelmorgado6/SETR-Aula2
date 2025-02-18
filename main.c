/** \file main.c
*   \brief Main test file for the Energy Consumption module
*
*        This file tests all the funtions on the 
*       Energy Consumption module developped for this class
*
* \author Pedro Ramos 
* \author Rafael Morgado
* \date 18/2/2025
* \bug There are no bugs
*/

#include <stdio.h>
#include "enerconsumption.h"

/**
 * \brief Main function to test the Energy Consumption module.
 *
 * This function initializes the module, adds energy readings, 
 * and calculates the total energy consumption, peak usage, 
 * and cost.
 *
 * \return Returns 0 upon successful execution.
 */
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