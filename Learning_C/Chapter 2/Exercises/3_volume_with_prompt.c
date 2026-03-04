/*
    Modify the program of Programming Project 2 so that it prompts the user to enter the radius
    of the sphere.
*/
#include <stdio.h>

#define PI 3.1419f

int main() {
    float radius;
    printf("Insert the radius of the sphere: ");
    scanf("%f", &radius);

    float volume = (4.0f/3.0f) * PI * (radius * radius * radius);

    printf("The volume of the sphere of radius %f its %.1f\n", radius, volume);

    return 0;
}
