/**
 * @file promedio.c
 * @author your name (you@domain.com)
 * @brief obtienen el promedio de una cantidad.
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
int main()
{
    int num = 0;
    int suma = 0;
    float prom = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf ("escriba un numero: ");
        scanf ("%d", &num);
        suma += num;

    }
    prom = (float)suma / 5.0; //float indica que estaconvirtiendo a suma en un numero flotante temporal y arrojar un flotante como resultado.
    printf("El promedio es:%10.2f\n",prom); //%10.2f\n" 10 es la amplitud del numero resultante, y .2 representa el numero de 
    
    return 0;
}

