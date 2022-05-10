/*
Autor:         Maynor Ballina
Fecha:         Tue May 10 20:46:20 CEST 2022
compilador:    g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      g++ -o dosClasesSimples.out dosClasesSimples.cpp
Librerias:     iostream
Resumen:       Ejemplo del uso de clases simples otra forma de contructor
*/

//librerias
#include <iostream>
//para fijar la programacion de las directivas de string
using namespace std;

//declaramos clase con atributos y metodos
class Fecha
{
    //atributos privados
    int dia, mes, anyo;
    //metodos
    public:
        void fijFecha(int, int, int);
        void mosFecha();
};
//Defino fuera de la clase mis metodos
//para definir la funcion de la clase es necesario en nombre de la clase y
// el operador ::
void Fecha::fijFecha(int d, int m, int a)
{
    dia=d;
    mes=m;
    anyo=a;
}
//defino la fuincion sin variables
void Fecha::mosFecha()
{
    //simplemente escribir la fecha
    cout <<dia<<"/"<<mes<<"/"<<anyo;
}

int main()
{
    //declaro variables locales
    int d,m,a;
    //declaro objetos
    Fecha fHoy;
    Fecha otraFecha;
    //utilizo los metodos de los objetos
    fHoy.fijFecha(10,5,2022);
    cout << "La fecha de hoy es: ";
    fHoy.mosFecha();
    cout << endl;
    cout << "Ingrese la fecha que desee:\n";
    cout << "Dia: ";
    cin >> d;
    cout << "mes: ";
    cin >> m;
    cout << "año: ";
    cin >> a;
    cout << "Su fecha ingresada es: ";
    otraFecha.fijFecha(d,m,a);
    otraFecha.mosFecha();
    cout << endl;
    return 0;
}