#include <stdio.h>
#include "enerconsumption.h"

static float readings[MAX_READINGS];
static int currentIndex = 0;

void ecInit() {
    for (int i = 0; i < MAX_READINGS; i++) {
        readings[i] = 0.0;
    }

    currentIndex = 0;
}

void ecAdd(float reading){
    if (currentIndex < MAX_READINGS) {
        readings[currentIndex++] = reading;
        printf("    -> Reading added: %.2f kW/h\n", reading);
    } 
    else {
        printf("ERROR: Readings limit reached.\n");
    }
}

void dtSum(float *peak, float *dailyValue, float *dailyCost) {
    *peak = 0.0;
    *dailyValue = 0.0;

    //  Process the values
    for (int i = 0; i < currentIndex; i++) {
        //  Get peak value
        if (readings[i] > *peak) {
            *peak = readings[i];
        }

        //  Add the current value to the daily sum
        *dailyValue += readings[i];
    }

    //  Calculate the cost
    *dailyCost = (*dailyValue) * COST_KWH;
    
    // Print everything
    printf("    -> Peak Consumption: %.2f kW/h\n", *peak);
    printf("    -> Total Daily Consumption: %.2f kW/h\n", *dailyValue);
    printf("    -> Total Cost: %.2f EUR\n", *dailyCost);
}