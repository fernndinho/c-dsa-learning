/*
    Extend the program in Programming Project 1 to handle three-digit numbers
*/

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    int cent = number / 100;
    int digit = (number / 10) % 10;
    int unit = number % 10;

    printf("The reversal is: %d%d%d\n", unit, digit, cent);

    return 0;
}
