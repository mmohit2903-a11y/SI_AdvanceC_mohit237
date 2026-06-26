// Swap two arrays using pointers. 
#include <stdio.h>
int main() 
{
    int a[100], b[100], n;
    int *p1, *p2, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (p1 = a; p1 < a + n; p1++) 
    {
        scanf("%d", p1);
    }

    printf("Enter elements of second array:\n");
    for (p2 = b; p2 < b + n; p2++) 
    {
        scanf("%d", p2);
    }

    // Reset pointers
    p1 = a;
    p2 = b;

    // Swap arrays using pointers
    for (int i = 0; i < n; i++) 
    {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("After swapping:\n");

    printf("First array: ");
    for (p1 = a; p1 < a + n; p1++)
    {
        printf("%d ", *p1);
    }

    printf("\nSecond array: ");
    for (p2 = b; p2 < b + n; p2++) 
    {
        printf("%d ", *p2);
    }

    return 0;
}