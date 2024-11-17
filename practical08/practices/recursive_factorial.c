#include<stdio.h>

int RecursiveFactorial(int n){
    if (n==0){
        return 1;
    }
    else if(n>0){
        return n*RecursiveFactorial(n-1);
    }
}

int main()
{
    int n=5;
    printf("%d! = %d\n", n, RecursiveFactorial(n));
    return 0;
}
