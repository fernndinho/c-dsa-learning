/*
    Write a program that prompts the user to enter a number n, then prints all even squares
    between 1 and n. For example, if the user enters 100, the program should print the following:
        4
        16
        36
        64
        100
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a value: ");
    scanf("%d", &n);

    int square = 0;

    for (int i = 2; ;i += 2) {
        square = i*i;
        
        if(square > n) {
            break;
        }

        printf("%d\n", square);
    }
    

    return 0;
}