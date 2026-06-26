#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {

        // spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {

        // spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}