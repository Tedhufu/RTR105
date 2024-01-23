#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'iekrasots.png'
set xrange [ -4 : 4 ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
NO_ANIMATION = 1


set xzeroaxis linestyle 0
show xzeroaxis

set title "Funkcijas J1(2*x) iepildits"

plot [1:5] besj1(2*x) with filledcurves above, besj1(2*x) with filledcurves below
