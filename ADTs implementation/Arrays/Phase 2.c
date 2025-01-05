#include <stdio.h>

int getArrSize();
void clearInputBuffer(int input);
void displayOptions(char options[][100], int size);
int pushElement(int arr[], int *size);
int popElement(int arr[], int *size);

int main() {
    int arrSize, index, choice;
    char ch;
    int pushedElement = 0, optionSize = 4, poppedElement = 0;
    char options[4][100] = {
        "Push an element.",
        "Pop an element.",
        "Replace an element.",
        "Exit"
    };
    
    arrSize = getArrSize();
    int arr[arrSize];

    for(int i = 0; i < arrSize; i++) {
        while(1) {
            printf("Enter number %d: ", i+1, arr[i]);
            if((scanf("%d%c", &arr[i], &ch)) == 2 && ch == '\n') {
                break;
            } else {
                printf("INPUT ERROR: Must be a valid integer.\n");
                printf("\n");
                clearInputBuffer(arr[i]);
            }
        }
    }

    while(1) {
        printf("\n");
        displayOptions(options, optionSize);
        printf("Enter choice: ");
        scanf("%d", &choice);

        printf("\n");

        switch(choice) {
            case 1:
                pushedElement = pushElement(arr, &arrSize);
                printf("Pushed Element: %d\n", pushedElement);
                break;
            case 2:
                poppedElement = popElement(arr, &arrSize);
                printf("Popped Element: %d\n", poppedElement);
                break;
            case 3:
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}

void clearInputBuffer(int input) {
    while((input = getchar()) != '\n');
    return;
}

void displayOptions(char options[][100], int size) {
    for(int i = 0; i < size; i++) {
        printf("[%d] - %s\n", i+1, options[i]);
    }

    return;
}

int getArrSize() {
    char ch;
    int size;

    while(1) {
        printf("Enter size: ");
        if((scanf("%d%c", &size, &ch)) == 2 && ch == '\n') {
            break;
        } else {
            printf("INPUT ERROR: Must be a valid integer.\n");
            printf("\n");
            clearInputBuffer(size);
        }
    }

    return size;
}

int pushElement(int arr[], int *size) { //update: dont use 0 indexing, if more than the size, add to the size
    int pushedElement, position = 0;
    char ch;

    printf("Pushing element...\n");

    while(1) {
        printf("\nEnter element to be pushed: ");
        if((scanf("%d%c", &pushedElement, &ch)) == 2 && ch == '\n') {
            break;
        } else {
            printf("ERROR: Must be a valid integer.\n");
            printf("\n");
            clearInputBuffer(pushedElement);
        }
    }

    while(1) {
        printf("[0-based indexing] At what position would you like to push element %d? ", pushedElement);
        if((scanf("%d%c", &position, &ch)) == 2 && ch == '\n') {
            break;
        } else {
            printf("ERROR: Must be a valid integer.\n");
            printf("\n");
            clearInputBuffer(position);
        }
    }

    if(position < 0 || position > *size) {
        printf("ERROR: Out of bounds.\n");
        printf("\n");
        return 0;
    } else {
        //shifting all elements to the left just in case we want to add +1 to size
        for(int i = *size; i > position; i--) {
            arr[i] = arr[i + 1];
        }

        arr[position] = pushedElement;
        (*size)++;

        printf("Updated Array: ");
        for(int i = 0; i < *size; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return pushedElement;
}

int popElement(int arr[], int *size) {
    int poppedElement = 0;
    int position;
    char ch;

    if(*size == 0) {
        printf("ERROR: Insufficient size.\n\n");
        return 0;
    }

    while(1) {
        printf("[0-based indexing]. Which element at which position would you like to pop?. ");
        if((scanf("%d%c", &position, &ch)) == 2 && ch == '\n') {
            if(position > *size) {
                printf("ERROR: Out of bounds.\n");
                printf("\n");
            } else {
                break;  
            }
        } else {
            printf("ERROR: Input must be a valid integer.\n");
            printf("\n");
            clearInputBuffer(position);
        }
    }

    poppedElement = arr[position]; 

    //shift array elements after the position to the left
    for(int i = position; i < *size; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Updated array: ");
    for(int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return poppedElement;
}