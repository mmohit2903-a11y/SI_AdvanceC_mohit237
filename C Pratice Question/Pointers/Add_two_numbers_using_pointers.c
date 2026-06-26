//Add two numbers using pointers. 
#include <stdio.h>
int main() 
{
    int a, b;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    int sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}