/*
    Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
    that amount using the smallest number of $20, $10, $5, and $1 bills:
        Enter a dollar amount: 93
        $20 bills: 4
        $10 bills: 1
        $5 bills: 0
        $1 bills: 3
*/
#include <stdio.h>

int main() {
    int money;
    printf("Enter a dollar amount: ");
    scanf("%d", &money);

    int bills20 = money / 20;
    money = money - bills20*20;

    int bills10 = money / 10;
    money = money - bills10*10;

    int bills5 = money / 5;
    money = money - bills5*5;

    int bills1 = money;

    printf("$20 bills: %d \n", bills20);
    printf("$10 bills: %d \n", bills10);
    printf("$5 bills: %d \n", bills5);
    printf("$1 bills: %d \n", bills1);

    return 0;
}

//UGLY AS FUCK
/*int main() {
    int money;
    int reduced;

    printf("Enter a dollar amount: ");
    scanf("%d", &money);

    reduced = money/20;
    printf("$20 bills: %d \n", reduced);
    money = money - 20*reduced;
    reduced = money / 10;
    printf("$10 bills: %d \n", reduced);
    money = money - 10*reduced;
    reduced = money / 5;
    printf("$5 bills: %d \n", reduced);
    money = money - 5*reduced;
    printf("$1 bills: %d \n", money);

    return 0;
}*/

