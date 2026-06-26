//Insert an element at a specific position in an array.
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;              
    int pos = 3;            
    int element = 25;

 
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos - 1] = element;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}