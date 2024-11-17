#include <stdio.h>

void insertionSort(int A[], int n) {
    for (int j = 1; j < n; j++) { // start from the second element
        int key = A[j];   // store the current element
        int i = j - 1;   // index of the last element in the sorted portion

        // shift right the elements greater than key
        while (i >= 0 && A[i] > key) {
            A[i + 1] = A[i];
            i--;
        }
        // insert key to the correct position
        A[i + 1] = key;
    }
}

int main() {
    int A[] = {5, 3, 8, 6, 2};
    int n = sizeof(A) / sizeof(A[0]); // calculate the length of the array

    printf("Input sequence of numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Call insertionSort
    insertionSort(A, n);

    printf("Sorted sequence of numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
