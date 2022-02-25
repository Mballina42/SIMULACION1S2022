/*
Autor:      Maynor Ballina
Fecha:      22/02/22
Compilador: gcc 9.3.0
Compilar:   gcc -o holamundo holaMundo.c
Librerias:  stdio
Resumen:    es un ejemplo simple de el primer programa en C.
*/

//Incluir las librerias
#include <stdio.h>
//1. inicia la funcion main de tipo entero
int main() {
// <<Inicio
//2. utilizo la funcion printf de stdio, el comando \n nos da un final de carrera
//   depliega en consola hola mundo
    printf("hola mundo\n");
//3. agregar la bandera de retorno 0 para definir que corrio bien el programa
    return 0;
// Fin>>
}