/*
    Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
    Enter an amount: 100.00
    With tax added: $105.00
*/

#include <stdio.h>

#define TAX_PERCENTAGE 5.0f

int main() {
    float money;
    
    printf("Enter an amount: ");
    scanf("%f", &money);

    float tax = (TAX_PERCENTAGE/100.0f) * money;
    float total = money + tax;
    
    printf("With tax added: %.2f\n", total);

    return 0;
}