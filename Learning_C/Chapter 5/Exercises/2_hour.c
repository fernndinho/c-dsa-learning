/*
    Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
    form:
        Enter a 24-hour time: 21:11
        Equivalent 12-hour time: 9:11 PM
    Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if((hours < 0 || hours > 23) || (minutes < 0 || minutes > 59)) {
        printf("Invalid time format");
        return 0;
    }

    if(hours > 0 && hours <= 12) {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hours, minutes);
    } else {
        int formated_hour = hours - 12;
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", formated_hour, minutes);
    }

    return 0;
}
