#include <stdio.h>

int main()
{
    int i, num, temp, rev, digit, n;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Odd Palindrome Numbers:\n");

    for(i = 1; i <= n; i += 2)   // only odd numbers
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