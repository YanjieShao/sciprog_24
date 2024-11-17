#include<stdio.h>
#include<stdlib.h>

int main(){
    int *a,i,b[6];
    a=(int*) malloc(6*sizeof(int));
    for(i=0; i<=5; i++){
	 a[i]= 2*i;
    }
    for(i=0; i<=5; i++){
	 printf("a[%d] == %d\n", i, a[i]);
    }
    printf("Size of array 'a' is %d\n",sizeof(a)/sizeof(int));
    printf("Size of array 'b' is %d\n",sizeof(b)/sizeof(int));
    free(a);

    return 0;
}
