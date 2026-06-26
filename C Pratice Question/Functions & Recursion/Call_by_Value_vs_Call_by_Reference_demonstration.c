//Call by Value vs. Call by Reference demonstration.
#include <stdio.h>

// Call by Value
void callByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    printf("Inside Call by Value (after swap): x = %d, y = %d\n", x, y);
}

// Call by Reference
void callByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside Call by Reference (after swap): x = %d, y = %d\n", *x, *y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Call:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call by Value
    callByValue(a, b);
    printf("After Call by Value:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call by Reference
    callByReference(&a, &b);
    printf("After Call by Reference:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}