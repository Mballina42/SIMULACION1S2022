unset label
clear
set terminal pdf
set output "Ej3.pdf"
set title "Pruebra grafico"
set xlabel "x"
set ylabel "datos"
set grid
set style data linespoint
plot "datos" using 1:2, "datos" using 1:3