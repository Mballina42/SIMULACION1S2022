/*
Autor:         Maynor Ballina
Fecha:         Fri May 6 20:39:24 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o comparacionMN.out comparacionMN.c -lm
Librerias:     stdio, stdlib, math
Resumen:       Una comparacion de los metodos numericos de runge-kutta, euler modificado y heun
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//prototipar mis funciones
float f(float t, float y);
float puntoMedio(float h, int n);
float eulerMod(float h, int n);
float heun(float h, int n);

void main(){
    //inicializamos las variables
    int a=0, b=2, n=3;
    float h;
    //encuentra los saltos temporales
    h=(b-a)/n;
    printf("punto medio: %f \t euler modificado: %f \t heun: %f\n",puntoMedio(h,n),eulerMod(h,n),heun(h,n));
}

// la funcion dada
float f(float t, float y){
    float rep=0;
    rep = y - pow(t,2) + 1;
    return rep;
}
//metodo numerico de punto medio
float puntoMedio(float h, int n){
    float w, t, K1, K2;
    t=0;
    w=0.5;
    for (int i = 0; i < n; i++)
    {
        //primero encuentro los coeficientes
        K1 = h*f(t,w);
        K2 = h*f(t+h/2,w+K1/2);
        //incrementa el valor de w valuando el valor K2
        w+=K2;
        //incrementa el tiempo
        t+=h;
    }
    return w;
}
//metodo numerico de euler modificado
float eulerMod(float h, int n){
    float w, t, tf;
    t=0;
    w=0.5;
    for (int i = 0; i < n; i++)
    {
        //calcular mi tiempo futuro
        tf=t+h;
        //incrementa el valor de w valuando con el tiempo actual y el tiempo futuro
        w+=(h/2)*(f(t,w)+f(tf,w+h*f(t,w)));
        //actualizamos el tiempo
        t+=tf;
    }
    return w;
}
//metodo numerico de heun
float heun(float h, int n){
    float w, t;
    t=0;
    w=0.5;
    for (int i = 0; i < n; i++)
    {
        //incrementa el valor de w valuando con el tiempo actual y el valor de w actual
        w+=(h/4)*(f(t,w)+3*f(t+2*h/3,w+(2*h/3)*f(t,w)));
        //actualizamos el tiempo
        t+=h;
    }
    return w;
}