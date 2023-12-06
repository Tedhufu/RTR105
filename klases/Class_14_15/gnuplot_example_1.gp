#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'azimuth.1.png'
unset border
unset key
set label 1 "X" at 1.20000, 0.00000, 0.00000 center norotate back nopoint
set label 2 "Y" at 0.00000, 1.20000, 0.00000 center norotate back nopoint
set label 3 "Z" at 0.00000, 0.00000, 23.0000 center norotate back nopoint
set arrow 1 from 0.00000, 0.00000, 0.00000 to 1.00000, 0.00000, 0.00000 head back filled linewidth 1.500 dashtype solid
set arrow 2 from 0.00000, 0.00000, 0.00000 to 0.00000, 1.00000, 0.00000 head back filled linewidth 1.500 dashtype solid
set arrow 3 from 0.00000, 0.00000, 0.00000 to 0.00000, 0.00000, 21.0000 head back filled linewidth 1.500 dashtype solid
unset parametric
set view 60, 30, 1, 1.75
set view azimuth 60
set view  equal xy
set style data lines
set xzeroaxis
set yzeroaxis
set zzeroaxis
set xyplane at 0
unset xtics
unset ytics
set ztics axis in scale 1,0.5 nomirror norotate  autojustify
set title "azimuth 60" 
set title  offset character 0, 2, 0 font "" textcolor lt -1 norotate
set xrange [ * : * ] noreverse writeback
set x2range [ * : * ] noreverse writeback
set yrange [ * : * ] noreverse writeback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
NO_ANIMATION = 1
## Last datafile plotted: "+"
splot sample [t=0:20] '+' using (cos($1)):(sin($1)):($1) with lines lw 2
