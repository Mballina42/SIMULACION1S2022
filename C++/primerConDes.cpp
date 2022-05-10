/*
Autor:         Maynor Ballina
Fecha:         Tue May 10 20:13:57 CEST 2022
compilador:    g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      g++ -o primerConDes.out primerConDes.cpp
Librerias:     iostream
Resumen:       Un ejemplo simple de como utilizar y crear, clases, atributos, objetos, contructor, 
               destrucor
UML:            
----------------
 Complejos
----------------
+ real: double
+ img: double
----------------
+ Complejos
+ ~Complejos
----------------
*/

//librerias
#include <iostream>

// Crear la clase con los atributos real, img y los metodos constructor y destructor
class Complejos
{
public:
    //atributos = definir variables
    double real, img;
public:
    //metodos = funciones
    //definimos contructor
    Complejos(double a, double b) {
        real = a;
        img = b;
    };
    //definimos destructor
    ~Complejos() {};
};


int main(void)
{
    //Crea objeto y se inicializan los valores de los atributos
    Complejos valor1(1.,2.);
    //mostrar el valor en consola del objeto
    std::cout << "Numero complejo: "<<valor1.real<<"+"<<valor1.img<<"i"<<std::endl;
    //se elimina el objeto
    valor1.~Complejos();
    //solo se libera el espacio de memoria pero no se eliminan los datos
    std::cout << "Numero complejo: "<<valor1.real<<"+"<<valor1.img<<"i"<<std::endl;
    return 0;
}