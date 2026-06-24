#include <stdio.h>

int main()
{
    long long a = 0, b = 1, c;
    int i;

    printf("First 61 terms of Fibonacci series:\n");

    for(i = 1; i <= 61; i++)
    {
        printf("%lld\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}