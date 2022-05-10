/*
Autor:         Maynor Ballina
Fecha:         Tue May 10 21:12:04 CEST 2022
compilador:    g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      g++ -o tresOperadoresSobrecargados.out tresOperadoresSobrecargados.cpp
Librerias:     iostream
Resumen:       Ejemplo basico del uso de operadores sobrecargados
UML:
----------
Posicion
----------
+ x:int
+ y:int
---------
+ suma
+ validar igual
----------

*/

//librerias
#include <iostream>
//declaro clase
class Posicion
{
    public:
    //atributos publicos
        int x =10;
        int y=20;
    public:
        //operador sobre cargado para sumar la posicion del objeto por atributos
        Posicion operator + (Posicion pos)
        {
            //se crea un nuevo objeto que se llama posicion
            Posicion nueva_posicion;
            nueva_posicion.x = x+pos.x;
            nueva_posicion.y = y+pos.y;
            return nueva_posicion;
        }
        //operador sobrecargado para una respuesta boleana
        bool operator == (Posicion pos)
        {
            //sealizo la verificacion de igualdad de atributos
            if (x==pos.x && y==pos.y)
            {
                return true;
            }else
            {
                return false;
            }
            
        }
};

int main(){
    //creo dos objetos
    Posicion pos1, pos2;
    std::cout << pos1.x<<","<<pos1.y<<std::endl;
    pos1.x=2;
    std::cout << pos1.x<<","<<pos1.y<<std::endl;
    Posicion pos3 = pos1 + pos2;
    std::cout << pos3.x<<","<<pos3.y<<std::endl;
    if (pos1==pos2)
    {
        std::cout << "si son iguales\n";
    }else
    {
        std::cout << "No son iguales\n";
    }
    return 0;
}