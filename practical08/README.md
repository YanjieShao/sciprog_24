# Practical 8

This folder contains practical 8 codes.

File exercises: Codes for Practical 8 file.

File practices: Self-study practices for slides.

## Compile:

* practices:

```bash
gcc insertionsort.c -o insertionsort 
```

```bash
gcc recursive_factorial.c -o recursive_factorial 
```

* exercises:

```bash
gcc gcd.c -o gcd
```

```bash
gcc -c gcd_random.c

gcc -c main.c

gcc -o gcd_random gcd_random.o main.o
```

## Execute:

* practices:

```bash
./insertionsort
Input sequence of numbers:
5 3 8 6 2 
Sorted sequence of numbers:
2 3 5 6 8 
```

```bash
./recursive_factorial
5! = 120
```

* exercises:

```bash
./gcd
Please enter two positive integers:
15
5
IterativeGCD(15, 5)=5
RecursiveGCD(15, 5)=5
```

```bash
./gcd_random
IterativeGCD(12, 9)=3
RecursiveGCD(12, 9)=3
```

