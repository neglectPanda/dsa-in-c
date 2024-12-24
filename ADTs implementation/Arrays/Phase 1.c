//push pop
#include <stdio.h>

int getMaxSize();
void clearInputBuffer(int input);
int popElement(int arr[], int *size);
int pushElement(int arr[], int *size);

int main() {
    int arrSize, poppedElement, pushedElement;
    char ch;

    arrSize = getMaxSize();

    int numArr[arrSize];
    
    for(int i = 0; i < arrSize; i++) {
        printf("Enter number %d: ", i+1, numArr[i]);
        while(1) {
            if((scanf("%d%c", &numArr[i], &ch)) == 2 && ch == '\n') {
                break;
            } else {
                printf("INPUT ERROR: Must be a valid integer.\n");
                printf("\n");
                clearInputBuffer(numArr[i]);
            }
        }
    }

    //call popElement Function
    poppedElement = popElement(numArr, &arrSize);
    pushedElement = pushElement(numArr, &arrSize);

    printf("\nPopped Element: %d\n", poppedElement);
    printf("Pushed Element: %d", pushedElement);

    return 0;
}

int getMaxSize() {
    char ch;
    int size;

    while(1) {
        printf("Enter array size: ");
        if((scanf("%d%c", &size, &ch)) == 2 && ch == '\n') {
            if(size > 0) {
                break;
            } else {
                printf("INPUT ERROR: Should be greater than 0.\n");
            }
        } else {
            printf("INPUT ERROR: Must be an integer.\n");
            printf("\n");
            clearInputBuffer(size);
        }
    }

    return size;
}

void clearInputBuffer(int input) {
    while((input = getchar()) != '\n');
    return;
}
//update pop to take in any position
int popElement(int arr[], int *size) {
    int lastElement = 0;
    
    //check first if there is something to pop
    if (*size == 0) {
        printf("ERROR: Not enough elements to pop.\n");
        return 0;
    }

    //iterate through all the elements
    for(int i = 0; i < *size; i++) {
        //to get the last element, the index of arr would be size - 1 because comp counts at 0
        //EXAMPLE
        //Arr: [1, 2, 3, 4, 5]
        //size = 5
        //index 0 - 1, index 1, - 2, index 3 - 4...
        //*size - 1 = 5 - 1 = 4
        //this is index 4 which is 5
        lastElement = arr[*size - 1];
    }

    //5 will be deleted here
    (*size)--;

    printf("\nUpdated array (popped): ");
    for(int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }

    //we return 5 as the deleted element from the array 
    return lastElement;
}

int pushElement(int arr[], int *size) {
    int pushedElement = 0;
    char ch;

    while(1) {
        printf("\nEnter element to be added: ");
        if((scanf("%d%c", &pushedElement, &ch)) == 2 && ch == '\n') {
            break;
        } else {
            printf("INPUT ERROR: Must be a valid integer.\n");
            printf("\n");
            clearInputBuffer(pushedElement);
        }
    }

    printf("\nUpdated Array (pushed): ");
    for(int i = 0; i < *size; i++) {
        arr[*size - 1] = pushedElement;
        printf("%d ", arr[i]);
    }

    return pushedElement;
}