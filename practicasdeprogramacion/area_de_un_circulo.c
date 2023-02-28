/**
 * @file area_de_un_circulo.c
 * @author Jose Antonio Moreno Galindo (tonioman123@gmail.com) 
 * @brief programa para obtener el area de un círculo
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#define PI 3.1416

int main()
{
    float radio = 0.0;
    float area = 0.0;
    printf("Radio: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El area es: %f", area);
    getc(stdin);
    getc(stdin);

    return 0;
}