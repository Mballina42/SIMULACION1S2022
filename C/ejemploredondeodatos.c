/*
Autor:         Maynor Ballina
Fecha:         Fri Mar 25 12:28:34 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o ejemploredondeodatos.out ejemploredondeodatos.c -lm
Librerias:     stdio, math
Resumen:       Ejemplo simple del redondeo de datos
*/

//librerias
#include <stdio.h>
#include <math.h>

int main(){
    int exp;
    double d;
    printf("apromacion hacia arriba 3.7: %f \naprximacion hacia abajo de 3.7: %f \n", ceil(3.7),floor(3.7));
    d = cos(3.7);
    printf("coseno de 3.7 %f\n",d);
    d = frexp(16.0,&exp);
    printf("mantisa de 16: %f, exponente de 16: %d \n",d,exp);
    return 0;
}