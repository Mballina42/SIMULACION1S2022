/*
Autor:         Maynor Ballina
Fecha:         Tue Mar 29 12:40:42 CST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o recursividadinfinita.out recursividadinfinita.c
Librerias:     stdio
Resumen:       Ejemplo basico de recursividad infinita
*/

//librerias
#include <stdio.h>

//Declaro el prototipo de la funcion
int mcd(int m, int n);

int main(){
    //declaracion de las variables globales
    int m,n;
    do
    {
        puts("ingrese dos numeros positivos: ");
        scanf("%d %d",&m,&n);
    } while (n<=0 || m <=0);
    
    printf("El maximo comun divisor es %d \n", mcd(m,n));
    
    return 0;
}

//funcion recursiva que busca llamarse a si misma hastra que se cumple la condicion n<=m n%m=0
int mcd(int m, int n){
    if (n <= m && m%n==0)
    {
        return n;
    }
    else
    {
        printf("m<n: %d, %d\n",m,n);
        return mcd(m,m%n);
    }
}