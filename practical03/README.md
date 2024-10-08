# Practical 3

This folder contains practical 3 codes.

Area_computation.c: implemented by myself

trap.c: implementation provided by the tutor

use_printf.c: simple tests of printf

## Compile:
 
* gcc Area_computation.c -o Area_computation -lm

* gcc trap.c -o trap -lm

* gcc use_printf.c -o use_printf

## Execute:

* ./Area_computation

Area computed using the Trapezodial rule: 0.695045
abs_diff = 0.001898
 rel_diff = 0.002738

* ./trap

The value of sum before the loop is: 1.732051
The value of sum after the loop is: 15.929254
The final value of sum is: 0.695045
The actual value of sum is: 0.693147
abs_diff = 0.001898
 rel_diff = 0.002738

* ./use_printf

I would like the value of fl1, that value is 1.1100, and the value of fl2 is 2.222200
