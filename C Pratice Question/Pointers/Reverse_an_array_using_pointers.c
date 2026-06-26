//Reverse an array using pointers.
#include <stdio.h>
int main() {
    int a[100], n;
    int *p1, *p2, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (p1 = a; p1 < a + n; p1++) 
    {
        scanf("%d", p1);
    }

    // Set pointers
    p1 = a;          // start
    p2 = a + n - 1;  // end

    // Reverse using pointers
    while (p1 < p2) 
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }

    printf("Reversed array:\n");
    for (p1 = a; p1 < a + n; p1++) 
    {
        printf("%d ", *p1);
    }

    return 0;
}