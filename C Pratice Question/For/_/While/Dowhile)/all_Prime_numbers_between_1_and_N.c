//Print all Prime numbers between 1 and N.
#include <stdio.h>

int main()
{
    int n, i, j, prime;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for(i = 2; i <= n; i++)
    {
        prime = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}