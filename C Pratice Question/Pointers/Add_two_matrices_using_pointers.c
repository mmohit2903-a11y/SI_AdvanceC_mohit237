//Add two matrices using pointers. 
#include <stdio.h>

int main() 
{
    int a[100][100], b[100][100], sum[100][100];
    int r, c;
    int *p1, *p2, *p3;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for (p1 = &a[0][0]; p1 < &a[0][0] + r * c; p1++) 
    {
        scanf("%d", p1);
    }

    printf("Enter second matrix:\n");
    for (p2 = &b[0][0]; p2 < &b[0][0] + r * c; p2++) 
    {
        scanf("%d", p2);
    }

    // Addition using pointers
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    for (int i = 0; i < r * c; i++)
    {
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }

    printf("Sum of matrices:\n");
    for (p3 = &sum[0][0]; p3 < &sum[0][0] + r * c; p3++) 
    {
        printf("%d ", *p3);
    }

    return 0;
}