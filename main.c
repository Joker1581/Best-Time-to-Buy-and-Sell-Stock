#include <stdio.h>

int maxProfit(int* prices, int pricesSize){
    int min=prices[0], profit=0;

    for (int i=0; i<pricesSize; i++)
    {
        if (prices[i]>min) (profit = profit > prices[i]-min ? profit:prices[i]-min);
        else min=prices[i];
    }
    return profit;
}