//Linear Search: Find an element in an array.
#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 45, 60};
    int n = 5;
    int key = 30;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in array\n", key);
    }

    return 0;
}