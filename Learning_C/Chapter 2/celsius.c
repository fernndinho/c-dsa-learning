#include <stdio.h>

int main(void) {
    float fahrenheits;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheits);
    
    float celsius = (fahrenheits - 32) * 5.0f/9.0f;

    printf("The temperature in celsius is %.2f\n",  celsius);

    return 0;
}
