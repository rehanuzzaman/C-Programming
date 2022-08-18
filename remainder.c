#include<stdio.h>
int main()
{
    float value1, value2;
    int division1;
    float division2;
    float modulus;
    
    printf("Enter the values to calculate the rest...");
    
    printf("\n\nDivisor:");
    scanf("%d", &value2);
    
    printf("\nDividend:");
    scanf("%d", &value1);
    
    division1 = value1 / value2;
    division2 = value1 / value2;
    modulus = division2 - division1;
    
    printf("\nQuotient: %d", division1);
    printf("\nRemainder: %f", modulus);
}
