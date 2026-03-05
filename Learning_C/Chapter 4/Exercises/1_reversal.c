/*
    Write a program that asks the user to enter a two-digit number, then prints the number with
    its digits reversed. A session with the program should have the following appearance:
        Enter a two-digit number: 28
        The reversal is: 82
    
    Read the number using %d, then break it into two digits.
*/

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    int digit = number / 10;
    int unit = number % 10;

    printf("The reversal is: %d%d\n", unit, digit);

    return 0;
}
