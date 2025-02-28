#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[10];
    int size;
    int target;

    printf("\nEnter how many elements: ");
    scanf("%d", &size);

    printf("\nEnter %d elements: ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter Key to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at %d position.\n", result+1);
    }

    return 0;
}
