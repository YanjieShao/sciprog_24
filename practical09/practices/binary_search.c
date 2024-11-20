#include<stdio.h>

int binarySearch(int arr[], int size, int target) { //arr[]: already sorted
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("%d is found at position %d.\n", target, result+1);
    } else {
        printf("%d cannot be found.\n", target);
    }

    return 0;
}
