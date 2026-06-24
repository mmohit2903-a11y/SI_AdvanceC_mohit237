//A Spy Number is a number where the sum of its digits is equal to the product of its digits.
//Sum = 1 + 2 + 3 = 6
//Product = 1 × 2 × 3 = 6
#include <stdio.h>

int main()
{
    int num, temp, rem;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem;
        product *= rem;
        temp /= 10;
    }

    if (sum == product)
        printf("%d is a Spy Number", num);
    else
        printf("%d is not a Spy Number", num);

    return 0;
}