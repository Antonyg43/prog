/**
 * @file lenguaje_c.c
 * @author Moreno Galindo Jose Antonio    (tonioman123@gmail.com)
 *         boleta: 2023640716
 * @brief Practica 1
 *        Evaluacion e imprecion de: nombre, edad, estatura y anio de nacimiento.
 * @version 0.1
 * @date 2023-02-26
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
int main() 
{
  char Nombre[50];
  int Edad = 0, Anio = 0;
  float Estatura = 0.0;

  printf("\nBuenos dias, porfavor, escribe tu nombre: ");
  gets(Nombre);
  printf("\nAhora ingrese su edad: ");
  scanf("%d", &Edad);
  printf("\ningrese su estatura: ");
  scanf("%f", &Estatura);
  Anio = 2023 - Edad;
  printf(" \nNombre: %s", Nombre);
  printf(" \nEstatura: %.2f metros", Estatura);
  printf(" \nAnio de nacimiento: %i", Anio);
  printf(" \nEdad: %i\n\n", Edad);

  return 0;
}
