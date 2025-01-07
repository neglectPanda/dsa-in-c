#include <stdio.h>

void selectionSort(int arr[], int length);

int main() {
    int arr[] = {6, 3, 4, 1, 0, 5, 2, 8, 9, 7};
    int length = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, length);

    return 0;
}

void selectionSort(int arr[], int length) {

    for(int i = 0; i < length - 1; i++) {
        int min = i;

        for(int j = i + 1; j < length; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        if(min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Updated array: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return;
}