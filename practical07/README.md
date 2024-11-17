# Practical 7

This folder contains practical 7 codes.

File exercises: Codes for Practical 7 file.

File pointers: Self-study practices for slides.

## Compile:

* pointers:

```bash
gcc pointer_arithmetic.c -o pointer_arithmetic
```

```bash
gcc pointer_array.c -o pointer_array 
```

```bash
gcc pointer_function.c -o pointer_function 
```

```bash
gcc pointer_to_array.c -o pointer_to_array
```

* exercises:

```bash
gcc exercise.c -o exercise -lm 
```

```bash
gcc exercise_extension.c -o exercise_extension 
```

## Execute:

* pointers:

```bash
./pointer_arithmetic
p points to address: 0x7fff2016edd4.
p++ points to address: 0x7fff2016edd4.
p points to address: 0x7fff2016edd8.
*(p++): 0.
p points to address: 0x7fff2016eddc.
*p++: 0.
p points to address: 0x7fff2016ede0.
```

```bash
./pointer_array
a[0] == 0
a[1] == 2
a[2] == 4
a[3] == 6
a[4] == 8
a[5] == 10
Size of array 'a' is 2
Size of array 'b' is 6
```

```bash
./pointer_function
p = 0x7fff6e95e864
i = 2
```

```bash
./pointer_to_array

1 2 3 4 5 6 7 8 9 10 
11 12 13 14 15 16 17 18 19 20 
21 22 23 24 25 26 27 28 29 30 
31 32 33 34 35 36 37 38 39 40 
41 42 43 44 45 46 47 48 49 50 
51 52 53 54 55 56 57 58 59 60 
61 62 63 64 65 66 67 68 69 70 
71 72 73 74 75 76 77 78 79 80 
81 82 83 84 85 86 87 88 89 90 
91 92 93 94 95 96 97 98 99 100
```

* exercises:

```bash
./exercise
Please input the order of the polynomial needed:
3
1.0000000000000000
0.5000000000000000
0.1666666666666667
e is estimated as 2.6666666667, with difference -5.161516e-02
```

```bash
./exercise_extension
1
1
1
1
1
```
