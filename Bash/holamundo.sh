#! /bin/bash

#comentario de parrafo completo
#inicio de etiqueta

: << 'Header'  
Autor:          Maynor Ballina
Fecha:          18-2-22
Tipo archivo:   Script de bash
Ejecucion:      ./holamundo.sh
Resumen:        Ejemplo del uso basico de comandos para la creacion de archivos de bash
# fin de etiqueta
Header

# Definir variables, estas deben de estar seguigas del simbolo =.
texto="" #varible tipo texto vacia
nombre="Maynor Ballina" #variable de texto con un valor
fecha=$(date) #variable utilizando un comando de terminal, importante: entre parentesis
archivo=$(cat ~/.viminfo) #se puede utilizar las variables para almacenar la informacion 
                          #de un archivo en especifico

#imprimir informacion
echo hola mundo #imprime frase
echo "hola mundo" #imprime frase
echo '"hola "mundo"' #comilla simple imprime frase, y la comilla doble se toma como texto
echo $nombre #para llamar a una variable se utiliza el simbolo de dolar
echo Mi nombre es $nombre, la fecha de hoy es $fecha #concatenando variables y texto
echo -e $nombre '\n'$fecha #-e activa la interpretacion de los caracteres especiales de texto
echo $USER #tambien se pueden utilizar las variables de linux

#manupilacion de texto, se debe utilizar llaves
echo ${nombre/y/Y} #manipulando una letra, texto/buscar/remplazar
echo ${nombre/a/X} #lo realiza SOLO para la primer letra encontrada
echo ${nombre:7:3} #recortar texto texto:inicio:#caracteres

#para trabajar instrucciones de bash
date #podemos agregar comando de terminal
cd ~ && ls #si queremos dos comando consecutivos utilizamos Y &&
cd juan || uname -a #tambien se puede utilizar o ||

#validar elementos por condicionales
if [ -z "$nombre" ]; then #inicio por medio del if
    echo "esta vacia"
elif [ -n "$nombre" ]; then #pregunta con if anidado
    echo "esta lleno"
fi #todo if debe de finalizarce por medio de fi
#RECORDAR: dentro de la condicion debe de existir espacion despues y antes del corchete.