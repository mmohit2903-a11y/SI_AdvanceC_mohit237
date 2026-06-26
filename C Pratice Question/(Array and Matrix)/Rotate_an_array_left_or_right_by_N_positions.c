//Rotate an array left or right by N positions.
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2;

    // Left Rotation
    int left[n];
    for (int i = 0; i < n; i++) {
        left[i] = arr[(i + pos) % n];
    }

    printf("Left Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", left[i]);
    }

    printf("\n");

    // Right Rotation
    int right[n];
    for (int i = 0; i < n; i++) {
        right[(i + pos) % n] = arr[i];
    }

    printf("Right Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", right[i]);
    }

    return 0;
}