#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'simple.1.png'
set key fixed left top vertical Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 50, 50

set xzeroaxis linestyle 0
show xzeroaxis

set title "Funkcijasjas J1(2*x) un tās atvasinājumu garfiki"
plot "deriv.dat" using 1:2 with lines title "J1(2x)' analītiskā fomula",\
 "deriv.dat"  using 1:3 with points title "J1(2x)' analītiskā fomula",\
 "deriv.dat"  using 1:4 with lines title "J1(2x)' finite difference",\
 "deriv.dat"  using 1:5 with points title "J1(2x)'' analītiskā fomula",\
 "deriv.dat"  using 1:6 with lines title "J1(2x)'' finite difference"