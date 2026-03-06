/*
    Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
    number with its digits reversed. Generalize the program so that the number can have one,
    two, three, or more digits.
*/
/*
    Una forma que se me ocurre es calcular la cantidad de digitos del numero con un logaritmo base 10.
    y hacer un for que vaya dividiendo y multiplicando el numero de atras para adelante e implirmir el
    numero en cada iteracion.
    pero hasta este capitulo todavia no se vio como hacer uso de modulos de matematicas.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    int reversal = 0;
    int i = 0;
    

    do {
        int last_digit = number % 10;
         //Al final tuve que usar una funcion matematica porque no se me ocurrio otra manera de implementarlo
        reversal += pow(10, i) * last_digit;
        number = number / 10;
        i++;
    } while (number > 0);
    
    printf("The reversal number is: %d\n", reversal);

    return 0;
}
