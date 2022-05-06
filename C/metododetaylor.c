/*
Autor:         Maynor Ballina
Fecha:         Tue May 3 21:32:18 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o metododetaylor.out metododetaylor.c -lm
Librerias:     stdio, math
Resumen:       Evaluar una funcion con el metodo de taylor
*/

//librerias
#include <stdio.h>
#include <math.h>
//prototipo mis funciones
float f(float t, float y);
float df(float t, float y);
float politaylor(float t, float y, float h);
float mtaylor(int a, int b, int n);

void main(){
    int a=0, b=2;
    int n;
    puts("ingrese el numero de iteraciones");
    scanf("%d",&n);
    printf("El valor es de: %f",mtaylor(a,b,n));
}

//funcion
float f(float t, float y){
    float rep=0;
    rep = y - pow(t,2) + 1;
    return rep;
}
//derivada de la funcion
float df(float t, float y){
    float rep=0;
    rep = f(t,y) - 2 * t;
    return rep;
}
//El polinomio de Taylor
float politaylor(float t, float y, float h){
    float rep=0;
    rep = f(t,y)+h/2*df(t,y);
    return rep;
}
//aplicacion del metodo de taylor
float mtaylor(int a, int b, int n){
    //defino variables internas
    float h, t, w=0, y;
    //encuentra los saltos temporales
    h=(b-a)/n;
    //inicializo el tiempo 0 y la condicion inical de y
    t=a;
    y=0.5;
    //utilizo el y valuado por que w es una variable pivote de funcion valuada en y
    w=y;
    //las iteraciones para el metodo de taylor
    for (int i = 0; i < n; i++)
    {
        //incrementa el valor de y valuado con el valor anterior de y
        w+=h*politaylor(t,y,h);
        //incrementa el tiempo
        t+=h;
        //actualiza el valor de y
        y=w;
    }
    return y;
}