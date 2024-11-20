#include <stdio.h>
#include <stdlib.h>

int dynFibonacci(int n){

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int *table = (int *)malloc((n+1)*sizeof(int));
    if (table == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    table[0] = 0;
    table[1] = 1;

    for (int i=2; i<n+1; i++){
        table[i] = table[i-2] + table[i-1];
    }
    int result = table[n];

    free(table);

    return result;
}

int main(){
    int n;
    printf("Please enter the value of n: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
	return 0;
    }

    int result = dynFibonacci(n);
    printf("Fibonacci(%d) = %d\n", n, result);

    return 0;
}
