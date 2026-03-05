/*
    Extend the program in Programming Project 1 to handle three-digit numbers
*/

#include <stdio.h>

int main() {
    int unit, digit, cent;
    
    printf("Enter a three-digit number: ");
    scanf("%d%d%d", &unit, &digit, &cent);

    printf("The reversal is: %d%d%d\n", unit, digit, cent);
    return 0;
}
