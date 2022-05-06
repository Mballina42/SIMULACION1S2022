unset label
clear
set terminal jpeg
set output "Graficoaltura.jpg"
set title "Altura del tanque"
set xlabel "tiempo"
set ylabel "altura"
set grid
set style data point
plot "altura" 