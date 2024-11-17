#include<stdio.h>
#include<stdlib.h>

int *nintarray(int n){
    int *p;
    p=(int *) malloc(n * sizeof(int));
    return p;
}

void main(){
    int *p, i, nelements=100;
    p = nintarray(nelements);
    for(i=0; i<nelements; i++){
        p[i]=i+1;
	if (i%10 == 0){
            printf("\n");
        }
	printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
}
