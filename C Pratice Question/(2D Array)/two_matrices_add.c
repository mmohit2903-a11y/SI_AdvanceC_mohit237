//Add two matrices
#include <stdio.h>

int main() 
{
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[100][100], B[100][100], Sum[100][100];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}