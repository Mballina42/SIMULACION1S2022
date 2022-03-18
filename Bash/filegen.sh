#!/bin/bash

: << 'Header'
Autor:              Maynor Ballina
Fecha:              08/03/2022
Tipo de archivo:    Script de Bash
Ejecucion:          ./filegen.sh
Resumen:            genera header para archivos de programacion en lenguaje C.
Header
#bienvenida
echo "**** Generador de Archivos de C ****"
#obtener y validar el nombre del archivo
read -p "Ingrese nombre del archivo: " nombre
if [ -z $nombre ]; then
    echo "No ingreso un nombre valido"
    exit 2
fi
fnombre=$nombre".c"
if [ -e $fnombre ]; then
    echo "El archivo ya existe"
    exit 2
fi
salida=$nombre".out"
fecha=$(date)
version=$(gcc --version | head -n 1)
#crear el contenido del header
echo "/*" > $fnombre
echo "Autor:         Maynor Ballina" >> $fnombre
echo "Fecha:        " $fecha >> $fnombre
echo "compilador:   " $version >> $fnombre
echo "Compilar:     " gcc -o $salida $fnombre >> $fnombre
echo "Librerias:    " stdio >> $fnombre
echo "Resumen:      " >> $fnombre
echo "*/" >> $fnombre
echo "" >> $fnombre
echo "//librerias" >> $fnombre
echo "#include <stdio.h>" >> $fnombre
echo "Archivo realizado"