/*
Autor:         Maynor Ballina
Fecha:         Fri Mar 18 13:27:01 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o funcionesbasico.out funcionesbasico.c
Librerias:     stdio
Resumen:       Un ejemplo basico del uso de funciones en C
*/

//librerias
#include <stdio.h>
int v1, v2;
//escribir una funcion con todo su contenido, esta debe de ir antes del main
//una funcion que devuelve el mayor valor de los ingresados
int max(int x, int y){
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    } 
}

//para prototipar una funcion se debe de hacer se la siguiente forma
//siempre debe de llevar punto y coma al final
int min(int x, int y);

int main(){
    v1=10;
    v2=5;
    printf("valor maximo: %d\n",max(v1,v2));
    printf("valor maximo: %d\n",max(50,100));
    printf("valor maximo: %d\n",min(50,100));
    printf("valor maximo: %d\n",min(v1,v2));
    return 0;
}

//el conido de la funcion prototipada
int min(int x, int y){
    if (x<y)
    {
        return x;
    }
    else
    {
        return y;
    } 
}