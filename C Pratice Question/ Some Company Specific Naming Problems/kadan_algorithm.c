//Find the first and last Position " / Kaden's Algorithm
#include <stdio.h>

int main() 
{
    int a[100], n, key;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) 
    {
        if (a[i] == key) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("First Position = %d\n", first);
    printf("Last Position = %d\n", last);

    return 0;
}