/*
Autor:         Maynor Ballina
Fecha:         Tue May 3 20:48:37 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o metodoEuler.out metodoEuler.c -lm
Librerias:     stdio, math
Resumen:       Solucionar el vaciado de un tanque por medio del metodo de euler
*/

//librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Prototipo de funciones
float df(int A, float K, float h);

//funcion principal de problema
void main(){
    //defino las variables e inicializo
    int Area = 1;
    float K = 0.1, h = 10, t = 0, delta = 0.1;
    //inicializamos el puntero de archivos y lo abrimos mientras se ejecuta el programa
    FILE *pf = fopen("altura","wt");
    //realizar el metodo numero miestras hay agua en el tanque
    while (h>0.004)
    {
        //validar el valor de la altura del agua cuando han pasado 3 segundos
        if (round(t)==3.0)
        {
            printf("\n La altura en %f segundos es de: %f \n",t,h);
        }
        //Ingreso cada valor obtenido en mi archivo
        fprintf(pf,"%.4f\t%.4f\n",t,h);
        //Ejecuto el metodo numerico
        h+=df(Area,K,h);
        t+=delta;
    }
    //Ingreso el ultimo valor obtenido en mi archivo
    fprintf(pf,"%.4f\t%.4f",t,h);
    //debo de cerrar el archivo
    fclose(pf);
    printf("\n El tiempocuando la altura es igual a 0 es de: %f \n",t);
    system("gnuplot grafica.gp");
}

//la funcion de la derivada de la altura con respecto del tiempo
float df(int A, float K, float h){
    float rep;
    rep =-(K*sqrt(h))/A;
    return rep;
}