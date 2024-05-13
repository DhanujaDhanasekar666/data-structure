#include <stdio.h>
void printUnique(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        int isUnique = 1;
        for (int j = 0; j < size; ++j) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unique elements in the array: ");
    printUnique(arr, size);
    return 0;
}

