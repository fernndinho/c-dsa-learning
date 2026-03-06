/*
    Write a program that asks the user to enter two integers, then calculates and displays their
    greatest common divisor (GCD):
        Enter two integers: 12 28
        Greatest common divisor: 4
*/
#include <stdio.h>

int main() { //No era necesario evualuar cual es mas grande
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    printf("Greatest common divisor: %d\n", a);

    return 0;
}

/*int main() { //Mejorable
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int largest = a > b ? a : b;
    int lowest = a > b ? b : a;
    
    while (lowest != 0) {
        largest = lowest;
        lowest = largest % lowest;
    }
    
    printf("Greatest common divisor: %d\n", largest);

    return 0;
}*/