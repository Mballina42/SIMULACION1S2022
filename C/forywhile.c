/*
Autor:         Maynor Ballina
Fecha:         Tue Mar 15 12:30:03 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o forywhile.out forywhile.c
Librerias:     stdio
Resumen:       Ejemplo basico del uso de for y while en C
*/

//librerias
#include <stdio.h>

int main(){
    //definiendo y declarando una variable de conteo como bandera condicional
    int contador = 0;
    // Un while simple el cual valida por medio de la bandera contador, imprime hasta que contador se cumpla
    while (contador<10)
    {
        printf("%d ", contador);
        contador++;
    }
    printf("\n");
    
    // Un do while simple el cual valida por medio de la bandera contador, imprime hasta que contador se cumpla + 1
    contador = 0;
    do
    {
        printf("%d ", contador);
        contador++;
    } while (contador<10);
    printf("\n");

    //for simple
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    //Loops infinitos
    //un loop infinito por medio del for al no decirle sus condiciones
    for (;;)
    {
        printf("dentro de loop");
        contador=contador*2;
        //se untiliza una condicion por medio del if para validar que un contador cumpla y pueda salir
        if (contador > 1500) break;  
    }

    //loop infinito por medio de while
    while(1){
        contador++;
    }

    return 0;
}