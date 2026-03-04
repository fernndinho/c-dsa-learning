/*
    Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr^3. 
*/

#include <stdio.h>

#define PI 3.1419f

int main() {
    float radius = 10.0f;
    float volume = (4.0f/3.0f) * PI * (radius * radius * radius);

    printf("The volume of the sphere of radius %f its %.1f\n", radius, volume);

    return 0;
}
