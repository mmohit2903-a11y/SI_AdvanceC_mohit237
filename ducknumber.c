//A Duck Number wo number hota hai jisme zero (0) present ho, lekin leading zero nahi hota.
#include <stdio.h>

int main()
{
    int num, temp, rem;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        rem = temp % 10;

        if(rem == 0)
        {
            flag = 1;
            break;
        }

        temp /= 10;
    }

    if(flag == 1)
        printf("%d is a Duck Number\n", num);
    else
        printf("%d is not a Duck Number\n", num);

    return 0;
}