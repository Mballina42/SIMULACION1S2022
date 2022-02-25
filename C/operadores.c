/*
Autor:      Maynor Ballina
Fecha:      25/02/22
Compilador: gcc 9.3.0
Compilar:   gcc -o Operadores.out Operadores.c
Librerias:  stdio
Resumen:    es un ejemplo simple del uso de operadores en C.
*/

//incluir librerias
#include <stdio.h>

//Definicion de constantes enumeradas.
enum Boolean { False, True};
//Declaro variables globales
int res, x, y;

int main(){
    //inicializar los valores
    x = 2;
    y = 3;
    printf("El valor de x = %d, El valor de y = %d \n",x,y);

    //operaciones + - * /
    res = x + y;
    printf("resultado = %d \n",res);
    //la suma en la misma variable
    x += y;
    printf("resultado = %d \n",x);
    x=2;
    //multiplica la misma variable
    x *= x;
    printf("resultado = %d \n",x);
    x=2;
    //modulo de la division
    x %= y;
    printf("resultado = %d \n",x);
    return 0;
}
