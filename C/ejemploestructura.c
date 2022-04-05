/*
Autor:         Maynor Ballina
Fecha:         Tue Apr 5 20:41:11 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o ejemploestructura.out ejemploestructura.c
Librerias:     stdio
Resumen:       ejemplo del uso de estructuras, por medio de menu, ingreso e impresion
*/

//librerias
#include <stdio.h>
//Defino una constante para el tamaño del texto
#define ttexto 30
//declaracion de estructura de nombre persona y sus tipos de datos
typedef struct
{
    char nombre[ttexto];
    int edad;
    float altura, peso;
} persona;
//inicializar las estructuras
persona alumno1 = {"Juan Perez",22,1.80,120};
persona alumno2;

//prototipado de funciones
void mostrarEstructura();
void ingresoDatos(persona est);
void muestraDatos(persona est);

//cuerpo principal del programa
int main(){
    //defino variable para menu de seleccion
    int seleccion;
    while (1)
    {
        puts("Bienvenido seleccione una de las siguientes opciones");
        puts("1) mostrar como esta definida la estructura");
        puts("2) Ingresar Informacion de Alumno");
        puts("3) Mostrar la informacion de alumnos");
        puts("Salir con cualquier otro valor");
        scanf("%d",&seleccion);
        switch (seleccion)
        {
        case 1:
            mostrarEstructura();
            break;
        case 2:
            ingresoDatos(alumno2);
            break;
        case 3:
            muestraDatos(alumno1);
            muestraDatos(alumno2);
        default:
            return 0;
            break;
        }
    }
}

//mostrar estructura
void mostrarEstructura(){
    puts("typedef struc{");
    puts(" char nombre[tamaño nombre];");
    puts(" int edad;");
    puts("float altura peso;");
    puts("} persona;");
}

//funcion que toma datos para mi estructura
void ingresoDatos(persona est){
    puts("Ingrese los datos del estudiante");
    puts("Ingrese el nombre");
    getchar();
    fgets(est.nombre,ttexto,stdin);
    puts("Ingresas edad");
    scanf("%d",&est.edad);
    puts("Ingresas altura");
    scanf("%f",&est.altura);
    puts("Ingresas peso");
    scanf("%f",&est.peso);
    puts("Alumno Ingresado");
}

//funcion para imprimir los datos de la estructura
void muestraDatos(persona est){
    printf("nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("altura: %f\n", est.altura);
    printf("peso: %f\n", est.peso);
}