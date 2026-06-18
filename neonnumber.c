#include <stdio.h>

int main()
{
    int i, sq, temp, count = 0;

    for(i = 1; i <= 100; i++)
    {
        sq = i * i;
        int sum = 0;

        for(temp = sq; temp > 0; temp /= 10)
        {
            sum += temp % 10;
        }

        if(sum == i)
        {
            printf("Neon number: %d\n", i);
            count++;
        }
    }

    printf("Count = %d\n", count);

    return 0;
}