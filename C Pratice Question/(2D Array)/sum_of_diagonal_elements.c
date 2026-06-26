//Calculate the sum of diagonal elements.
#include <stdio.h>
int main() {
    int n, i, j;
    int matrix[100][100];
    int sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }
    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}