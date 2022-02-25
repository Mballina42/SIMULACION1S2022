/*
Autor:      Maynor Ballina
Fecha:      22/02/22
Compilador: gcc 9.3.0
Compilar:   gcc -o TipoVariable TipoVariable.c
Librerias:  stdio
Resumen:    es un ejemplo simple de el primer programa en C.
*/

//incluir librerias
#include <stdio.h>
//Variables globales
//definir variables
int x;
char texto;
//definir e inicializar constantes
#define PI 3.1416 //declare e inicialice constante del tipo simbolica
const float g = 9.8; //declara e inicializa constante del tipo declarada del tipo float

//INICIA funcion principal
int main(){
    //las variables locales de definen e inicilizan dentro de las funciones
    float resultado;
    //definir e inicializar variables
    double res = 0.0000253;
    int areaTriangulo, y = 3, ac = 3;

    //Para inicializar las variables definidas
    x = 2;
    texto='Y';

    //para imprimier variables existen diferentes presentaciones de las variables en texto
    printf("entero: %d, punto flotante: %f, texto: %c, double: %f, doble formato cientifico: %e \n",x,PI,texto,res,res);

    //Cuando no es el mismo tipo de variable se debe de hacer una conversion de variable
    printf("variable: %d \n",(int) res);

    //operaciones entre enteros
    x = 2 + y;
    printf("x=2+y: %d \n", x);

    //operaciones entre entero y flotante
    //si asigna a una variable del tipo entero
    x = y + PI;
    printf("x=y+PI %d \n", x);
    //si asigna a una variable del tipo flotante
    resultado = y + PI;
    printf("resultado=y+PI %f \n", resultado);
    //operacion del tipo entero asignado a una variable del tipo float con resultado entero
    resultado = y + x;
    printf("resultado=y+x %f \n", resultado);
    //operacion del tipo entero asignado a una variable del tipo float con resultado float
    //importante hacer la conversion.
    resultado = (float) y / x;
    printf("resultado=y/x %f \n", resultado);

    //parciar un resultado
    printf("resultado=y*x %d \n", x*y);
    printf("resultado=y/x %f \n", (float) y/x);
    return 0;
}