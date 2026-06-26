//Input and print array elements using pointers. 
#include <stdio.h>

int main() 
{
    int arr[100], n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (ptr = arr; ptr < arr + n; ptr++) 
    {
        scanf("%d", ptr);
    }

    printf("Array elements are:\n");
    for (ptr = arr; ptr < arr + n; ptr++) 
    {
        printf("%d ", *ptr);
    }

    return 0;
}