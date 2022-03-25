/*
Autor:         Maynor Ballina
Fecha:         Fri Mar 25 12:11:47 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o ejemplovolumencono.out ejemplovolumencono.c
Librerias:     stdio
Resumen:       Ejemplo simple del uso de funciones de una sola linea por medio del define
*/

//librerias
#include <stdio.h>
//definicion de constantes, y funciones de una sola line
#define pi 3.1416
#define Vcono(radio, altura) (1/3.0*pi*(radio*radio)*altura)

//declaro la variables del programa
float radio, altura, volumen;

int main(){
    puts("Ingrese el valor del radio: ");
    scanf("%f",&radio);
    puts("Ingrese el valor de la altura: ");
    scanf("%f",&altura);
    volumen = Vcono(radio,altura);
    printf("Volumen del cono es: %.2f \n",volumen);
    return 0;
}