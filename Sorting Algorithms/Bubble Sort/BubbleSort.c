#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int size);

int main() {
    int arr[] = {2, 5, 1, 8, 0, 3, 6, 9, 7, 4};
    int length = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, length);

    return 0;
}

void bubbleSort(int arr[], int size) {
    bool isSwapped = false;
    int i = 0;
    do {
        isSwapped = false;

        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                isSwapped = true;
            }
        }
        
        i++;

    } while(isSwapped);

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}