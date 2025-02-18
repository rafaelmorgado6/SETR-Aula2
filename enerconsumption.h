#ifndef EC_OPERATIONS_H

#define EC_OPERATIONS_H
#define MAX_READINGS 96
#define COST_KWH 0.16

void ecInit();
void ecAdd(float reading);
void dtSum(float *peak, float *dailyValue, float *dailyCost);

#endif
