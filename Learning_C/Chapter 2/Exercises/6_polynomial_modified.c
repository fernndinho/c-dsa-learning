/*
    Modify the program of Programming Project 5 so that the polynomial is evaluated using the
    following formula:

    ((((3x + 2)x – 5)x – 1)x + 7)x – 6
*/

#include <stdio.h>

int main() {
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("P(%.f)=%.2f \n", x, result);

    return 0;
}
