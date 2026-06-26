//Binary Search: Find an element in a sorted array.
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}