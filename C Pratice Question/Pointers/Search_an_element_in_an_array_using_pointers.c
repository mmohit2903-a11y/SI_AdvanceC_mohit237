//Search for an element in an array using pointers. 
#include <stdio.h>

int main() 
{
    int a[100], n, key;
    int *p, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (p = a; p < a + n; p++) 
    {
        scanf("%d", p);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Search using pointer
    for (p = a; p < a + n; p++) 
    {
        if (*p == key) 
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}