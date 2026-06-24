#include <stdio.h>

int main()
{
    int i = 1, num, temp, rev, digit;
    int count = 0;

    printf("First 10 Palindrome Numbers:\n");

    while(count < 10)
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
            count++;
        }

        i++;
    }

    return 0;
}