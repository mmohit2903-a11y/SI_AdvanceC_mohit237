#include <stdio.h>
#include <math.h>

int main()
{
    int rem, count, sum, power;

    for (int i = 1; i < 1000; i++)
    {
        count = 0;
        sum = 0;

    
        for (int temp = i; temp > 0; temp /= 10)
        {
            count++;
        }

        for (int temp1 = i; temp1 > 0; temp1 /= 10)
        {
            rem = temp1 % 10;
            power = pow(rem, count);
            sum += power;
        }

        if (sum == i)
        {
            printf("%d is an Armstrong number\n", i);
        }
    }

    return 0;
}