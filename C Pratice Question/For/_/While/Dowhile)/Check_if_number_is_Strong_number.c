//Check if a number is a Strong number (sum of factorial of digits = number).
#include <stdio.h>

int main()
{
    int num, original, rem;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        rem = num % 10;

        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num /= 10;
    }

    if(sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}