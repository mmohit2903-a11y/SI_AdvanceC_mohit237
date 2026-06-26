//Print Pascal’s Triangle. 
#include <stdio.h>

int main() {
    int n, i, j, coeff;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        // spaces for alignment
        for (j = 1; j < n - i; j++) {
            printf(" ");
        }

        coeff = 1;

        for (j = 0; j <= i; j++) {
            printf("%d ", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}