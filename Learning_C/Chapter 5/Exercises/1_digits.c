/*
    Write a program that calculates how many digits a number contains:
        Enter a number: 374
        The number 374 has 3 digits
    You may assume that the number has no more than four digits.
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int digits = 0;

    if (number < 10)
        digits = 1;
    else if (number >= 10 && number < 100)
        digits = 2;
    else if (number >= 100 && number < 1000)
        digits = 3;
    else if (number >= 1000 && number < 10000)
        digits = 4;
    else
        digits = -1;
    
    if (digits == -1) {
        printf("The number cannot be longer than 4 digits\n");
    } else {
        printf("The number %d has %d digits\n", number, digits);
    }

    return 0;
}
