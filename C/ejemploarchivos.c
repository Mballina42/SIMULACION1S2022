/*
Autor:         Maynor Ballina
Fecha:         Tue Apr 19 21:04:13 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o ejemploarchivos.out ejemploarchivos.c
Librerias:     stdio
Resumen:       Ejemplo basico del uso de archivos
*/

//librerias
#include <stdio.h>

int main(){
    //declarando un caracter para el ingreso de datos
    int c;
    //una variable de conteo
    int dato =0;
    //Inicializo el puntero de archivo
    FILE* pf;
    //la forma mas sencilla de escribir el nombre del archivo es por medio de un puntero
    char *salida= "salida.txt";
    //primero se debe abrir la comunucacion luego se debe validar
    if ((pf= fopen(salida,"wt"))==NULL)
    {
        puts("Error de escritura");
        return 1;
    }
    puts("Escribir algo");
    //obtener desde la terminal 10 caracteres o EOF para terminar
    while ((c=getchar())!=EOF&&dato<10)
    {
        //validar que se ingrese un caracter pero no identifique enter (\n) como un 
        //caracter mas.
        if ((c)!='\n')
        {
            putc(c,pf);
            dato++;
            printf("Caracter %d \n", dato);
        }
    }
    //MUY importante cerrar la comunicacion
    fclose(pf);
    return 0;
}