#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform the Quick Sort with the first element as the pivot
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[low]; // Choose the pivot as the first element
        int i = low;
        int j = high;

        while (i < j) {
            while (arr[i] <= pivot && i <= high)
                i++;
            while (arr[j] > pivot && j >= low)
                j--;

            if (i < j)
                swap(&arr[i], &arr[j]);
        }

        swap(&arr[low], &arr[j]); // Move pivot to its correct position

        quickSort(arr, low, j - 1); // Recursively sort the left subarray
        quickSort(arr, j + 1, high); // Recursively sort the right subarray
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
