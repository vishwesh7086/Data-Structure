#include <stdio.h>

void insertion(int arr[], int size);
void deletion(int arr[], int size);
void linearsearch(int arr[], int size);
void binarysearch(int arr[], int size);

int main() {
    int arr[10], choice;

    printf("Enter 6 elements in the array:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nCurrent Array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nMENU:\n1. Insertion\n2. Deletion\n3. Linear Search\n4. Binary Search");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            insertion(arr, 6);
            break;
        case 2:
            deletion(arr, 6);
            break;
        case 3:
            linearsearch(arr, 6);
            break;
        case 4:
            binarysearch(arr, 6);
            break;
        default:
            printf("Wrong choice\n");
    }

    return 0;
}

void insertion(int arr[], int size) {
    int loc, val;

    printf("\nEnter the location for insertion (0 to %d): ", size);
    scanf("%d", &loc);
    if (loc < 0 || loc > size) {
        printf("Invalid location!\n");
        return;
    }

    printf("Enter the value you want to insert: ");
    scanf("%d", &val);

    for (int i = size; i > loc; i--) {
        arr[i] = arr[i - 1];
    }
    arr[loc] = val;

    printf("Array after insertion:\n");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deletion(int arr[], int size) {
    int loc;

    printf("\nEnter the location to delete (0 to %d): ", size - 1);
    scanf("%d", &loc);
    if (loc < 0 || loc >= size) {
        printf("Invalid location!\n");
        return;
    }

    for (int i = loc; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void linearsearch(int arr[], int size) {
    int key, found = 0;
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found\n");
}

void binarysearch(int arr[], int size) {
    int key, temp;

    // Sort the array
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array for binary search: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    int low = 0, high = size - 1, mid, found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Element not found\n");
}
 
