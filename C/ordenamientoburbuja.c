/*
Autor:         Maynor Ballina
Fecha:         Fri Apr 22 21:12:39 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o ordenamientoburbuja.out ordenamientoburbuja.c
Librerias:     stdio
Resumen:       Ejemplo simple del algoritmo de burbuja para ordenar datos
*/

//librerias
#include <stdio.h>
#include <stdlib.h>

void main(){
    //inicializo el vector y lo muestro
    int n = 10;
    int A[n];
    puts("\nVertor Inicial");
    for (int i = 0; i < n; i++)
    {
        /* ingresar numeros al azar con la funcion rand */
        A[i]=rand()%100;
        printf("%d ",A[i]);
    }
    puts("\nOrdenando");
    int interruptor = 1;
    int pasada, j;
    //bucle que controla la cantidad de padas
    for (pasada = 0; pasada < n-1 && interruptor; pasada++)
    {
        interruptor = 0;
        //maneja el paso por el vector
        for (j = 0; j < n-pasada-1; j++)
        {
            //validando que el seleccionado sea mayor al siguiente
            if (A[j] > A[j+1])
            {
                int aux;
                printf("cambio %d %d a ",A[j],A[j+1]);
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
                printf("%d %d \n",A[j],A[j+1]);
            }
            interruptor = 1;
        }   
    }
    puts("\nVertor Ordenado");
    for (int i = 0; i < n; i++)
    {
        /* ingresar numeros al azar con la funcion rand */
        printf("%d ",A[i]);
    }
    puts("\nFIN");
}