/*
Autor:      Maynor Ballina
Fecha:      01/03/22
Compilador: gcc 9.3.0
Compilar:   gcc -o ifShitch.out ifShitch.c
Librerias:  stdio, ctype
Resumen:    es un ejemplo simple del uso de if, else if y sitch en C.
*/

//incluir librerias
#include <stdio.h>
#include <ctype.h>

//se declara una variable enumerada que es la representacion boleana
enum Bool {False, True} validacion;

void main(void){
    //declaro mis variables locales
    char letra;
    int x;

    //solicitar al usuario ingresar una letra
    printf("Ingrese una volcal: ");
    //capturar esa letra en una variable
    letra = getchar();
    //se valida si la letra ingresada es a
    if (letra!='a')
    {
        printf("la vocal ingresada es: %c \n",letra);
    }
    
    //solicitar al usuario ingrese un numero del uno al 5
    printf("ingrese un numero del 0 al 5: ");
    //capturar el valor numerico e ingresarlo en una variable
    scanf("%d",&x);
    //utilizar un if else para validar
    if (x > 3)
    {
        printf("el valor ingresado es mayor a 3 \n");
        validacion = True;
    }
    else
    {
        printf("el valor ingresado es menor o igual a 3 \n");
        validacion = False;
    }
    
    //la forma resumida de un if-> (comparacion)?valor verdadero:falor falso
    //utilizo la validacion con el tipo de variable enum
    (validacion==True)?printf("la validacion es verdadera\n"):printf("la validacion es falso\n");
    //if rapido con numero
    (x>2)?printf("el valor ingresado es mayor a 2 \n"):printf("el valor ingresado es menor a 2 \n");
}