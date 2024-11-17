#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int *allocatearray(int n);
void *fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main()
{
    int size = 5;
    int *array;
    array = allocatearray(size);
    fillwithones(array, size);
    printarray(array, size);
    freepointer(array);
    return 0;
}

int *allocatearray(int n)
{
    int *temp;
    temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    return (temp);
}

void *fillwithones(int *p, int n)
{
    for (int i=0; i<n; i++)
    {
        p[i] = 1;
	// *(p+i) = 1; equivalent
    }
}

void printarray(int *p, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\n", p[i]);
    }
}

void freepointer(int *p)
{
    free(p);
}
