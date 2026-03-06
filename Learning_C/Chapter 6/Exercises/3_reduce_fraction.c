/*
    Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
    terms:
    Enter a fraction: 6/12
    In lowest terms: 1/2
*/

#include <stdio.h>

int main() { //Mejorable
    int num, den;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    int a = num; //GCD
    int b = den;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    printf("In lowest terms: %d/%d \n", num/a, den/a);
    
    return 0;
}