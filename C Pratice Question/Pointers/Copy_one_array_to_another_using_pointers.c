//Copy one array to another using pointers. 
#include <stdio.h>
int main() 
{
    int a[100], b[100], n;
    int *p1, *p2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (p1 = a; p1 < a + n; p1++) 
    {
        scanf("%d", p1);
    }

    // Copy using pointers
    p1 = a;
    p2 = b;

    while (p1 < a + n) 
    {
        *p2 = *p1;
        p1++;
        p2++;
    }

    printf("Copied array:\n");
    for (p2 = b; p2 < b + n; p2++) 
    {
        printf("%d ", *p2);
    }

    return 0;
}