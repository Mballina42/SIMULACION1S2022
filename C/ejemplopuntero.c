/*
Autor:         Maynor Ballina
Fecha:         Tue Apr 19 20:37:17 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o ejemplopuntero.out ejemplopuntero.c
Librerias:     stdio
Resumen:       realizar el ejemplo del uso simple de punteros
*/

//librerias
#include <stdio.h>

void main(){
    //declarar una variable y un lugar
    int n = 70;
    //declaro una variable tipo puntero la cual voy a igualar a la direccion de la variable n
    int* p=&n;
    //imprimir difetentes formas de presentacion del puntero
    puts("Diversas formas del puntero");
    //se imprime variables y puntero de diversas formas
    printf("n=%d, &n=%p, p=%p, &p=%p \n",n,&n,p,&p);
    //variable tipo caracter
    char c;
    //puntero del caracter
    char *pc;
    c = '0';
    pc=&c;
    printf("%c el valor con el puntero %c \n",c,*pc);
    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("El valor es %c, en la direccion %p \n",*pc,&c);
    } 
}