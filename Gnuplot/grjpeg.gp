unset label
clear
set terminal jpeg
set output "Ej1.jpg"
set title "Pruebra grafico"
set xlabel "x"
set ylabel "datos"
set grid
set style data boxplot
plot "datos" 