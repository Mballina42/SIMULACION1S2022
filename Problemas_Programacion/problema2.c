/*
Autor:         Maynor Ballina
Fecha:         Fri Mar 18 12:43:30 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o problema2.out problema2.c
Librerias:     stdio
Resumen:      El programa va a recivir n numero de alturas y termina de obtener datos al ingrersarse una negativa,
              por ultimo este da el valor del promedio maximo y minimo de los datos ingresados.
*/

//librerias
#include <stdio.h>
//declaracion e inicializacion de variables
int x=0, n=0, max=0, min=0;
float med=0;

int main(){
    //1. leer los datos ingresados
    puts("bienvenido ingrese valores enteros de alturas, para finalizar ingrese un valor negativo");
    puts("Ingrese una altura: ");
    scanf("%d", &x);
    //2. almacenar el primer valor de altura en min y max
    max=x;
    min=x;
    //3. validar si la altura es mayor o igual a 0
    while (x>=0)
    {
        //4. acumular los datos de conteo y media para su uso al final
        n++;
        med+=x;
        //5. valuar si el valor ingresado es mayor al valor maximo por momento
        if (x>max)
        {
            max=x;
        }
        //6. valuar si el valor ingresado es menor al valor minimo por momento
        if (x<min)
        {
            min=x;
        }
        //7. Se lee nuevos valore ingresados
        puts("Ingrese otra altura: ");
        scanf("%d", &x);
    }
    //8. verifica que el valor de n sea mayor a 0
    if (n==0)
    {
        puts("No ingreso alturas validas");
    }
    else
    {
        //9. Imprime la media, maximo y minimo
        med=med/n;
        printf("De los valores ingresados: La media es: %f, \n El valor maximo es: %d \n El valor minimo es: %d\n",med,max,min);
    }
    return 0;
}