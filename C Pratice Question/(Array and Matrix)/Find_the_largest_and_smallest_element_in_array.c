//Find the largest and smallest element in an array.
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 23, 89, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}