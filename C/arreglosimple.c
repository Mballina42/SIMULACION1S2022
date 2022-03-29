/*
Autor:         Maynor Ballina
Fecha:         Tue Mar 29 13:35:42 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o arreglosimple.out arreglosimple.c
Librerias:     stdio
Resumen:       ejemplo de un arreglo simple (vector) lectura y escritura
*/

//librerias
#include <stdio.h>
//la definicion de una constante para el tamanio
#define NUM 5

int main(){
    //declaracion del vector
    int nums[NUM];
    //inicializar el verctor
    int dias[5]={1,2,3,4,5};
    //declaracion e incializacion de variables
    int i, total=0;
    //uso de un ciclo for para poder ingresar el valor del vector
    for ( i = 0; i < NUM; i++)
    {
        puts("Ingrese un numero para el vector");
        scanf("%d",&nums[i]);
    }
    printf("bits: %ld\n",sizeof(dias));
    //uso de for para imprimir los valores de los vectores
    puts("la lista de dias es:");
    for (i = 0; i < NUM; i++)
    {
        printf("dia %d, mun %d\n", dias[i], nums[i]);
        //suma acumulada del contenido de un vector
        total += nums[i];
    }
    printf("\nEl total de nums es : %d\n",total);
    return 0;
}
