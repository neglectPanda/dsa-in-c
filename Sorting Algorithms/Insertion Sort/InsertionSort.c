#include <stdio.h>

void insertionSort(int arr[], int size);

int main() {
    int arr[] = {4, 1, 3, 5, 2};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, arrSize);

    return 0;
}

void insertionSort(int arr[], int size) {

    for(int i = 1; i < size; i++) {
        
        int key = arr[i];
        int j = i - 1; 

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1; 
        }

        arr[j + 1] = key;
    }

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return;
}