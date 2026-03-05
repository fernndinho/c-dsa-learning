/* Prints int and float values in various formats */
#include <stdio.h>

int main(void) {
    int i;
    float x;

    i = 40;
    x = 0.0000083921f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); // |40|   40|40   |  040|
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);  // |     0.000| 8.392e-06|8.3921e-06|
    
    return 0;
}