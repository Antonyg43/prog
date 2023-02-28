/**
 * @file main.c
 * @author Jose Antonio Moreno Galindo (tonioman123@gmail.com)
 * @brief numeros pares e impares
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    int numero = 0;
    printf("usuario, proporcione un numero entero: ");
    scanf("%i",&numero);

    printf("el numero es %s", (numero&1) == 0 ? "PAR" : "IMPAR");
    return 0;
}