#include<stdio.h>

int main(){
    int a[3], i, *p;

    for (i=0; i<=2; i++){
        a[i] = 0;
    }
    p = &a[0];
    printf("p points to address: %p.\n", p);
    printf("p++ points to address: %p.\n", p++);
    printf("p points to address: %p.\n", p);
    printf("*(p++): %d.\n", *(p++));
    printf("p points to address: %p.\n", p);
    printf("*p++: %d.\n", *p++);
    printf("p points to address: %p.\n", p);

    return 0;
}
