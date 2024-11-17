#include "gcd_random.h"

int IterativeGCD(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int RecursiveGCD(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return RecursiveGCD(b, a%b);
    }
}

