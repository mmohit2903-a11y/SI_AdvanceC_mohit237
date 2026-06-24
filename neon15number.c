#include <stdio.h>

int main()
{
    int i, temp, sq, digit, sum;
    int count = 0;

    printf("Neon numbers:\n");

    for(i = 1; count < 15; i++)
    {
        sq = i * i;
        temp = sq;
        sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        if(sum == i)
        {
            printf("%d\n", i);
            count++;
        }
    }

    return 0;
}