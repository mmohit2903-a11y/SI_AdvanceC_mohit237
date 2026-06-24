#include <stdio.h>

int main()
{
    int i, num, temp, rev, digit;

    printf("Even Palindrome Numbers:\n");

    for(i = 2; i <= 1000; i += 2)
    {
        num = i;
        temp = num;
        rev = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        if(num == rev)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}