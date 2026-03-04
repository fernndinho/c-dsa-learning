#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
    int height, length, width, volume, weight;

    /*height = 8;
    length = 12;
    width = 10;*/
    
    printf("Insert the Height: ");
    scanf("%d", &height);
    printf("Insert the Lenght: ");
    scanf("%d", &length);
    printf("Insert the Width: ");
    scanf("%d", &width);


    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}