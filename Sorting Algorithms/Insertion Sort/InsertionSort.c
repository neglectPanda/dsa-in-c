#include <stdio.h>

void insertionSort(int arr[], int size);

int main() {
    int arr[] = {4, 1, 3, 5, 2};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, arrSize);

    return 0;
}

void insertionSort(int arr[], int size) {
    //inner loop loops through all the elements of the array
    //outer loop focuses on shifting the elements to the left in their proper positions

    //i = 1 because we want to compare it to the left
    //i = 0 is the default
    for(int i = 1; i < size; i++) {
        //keep track of the element we r lookin at
        int key = arr[i];
        int j = i - 1; //initialize to the left side of i

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1; //this is for elements to shift on the left
        }

        arr[j + 1] = key;
    }

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return;
}