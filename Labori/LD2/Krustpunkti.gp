#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'Krustpunkti.png'
set key fixed left top vertical Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 50, 50

set xzeroaxis linestyle 0
show xzeroaxis
set yzeroaxis linestyle 0
show yzeroaxis

set title "Funkcijas J1(2*x) krustpunkti"
set style line 1 lc rgb 'black' pt 7
set style line 2 lc rgb 'black' pt 7
set style line 3 lc rgb 'black' pt 7
set style line 4 lc rgb 'black' pt 7
set style line 5 lc rgb 'black' pt 7


plot [-5:5] besj1(2*x),'-' w p ls 1,'-' w p ls 2,'-' w p ls 3,'-' w p ls 4,'-' w p ls 5
1.91 0
e
0 0
e
-1.91 0
e
3.5 0
e
-3.5 0