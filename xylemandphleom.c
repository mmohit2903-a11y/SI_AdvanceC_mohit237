#include <stdio.h>

int main()
{
    int num, temp;
    int first, last;
    int meanSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;   // last digit

    // Find first digit
    for (temp = num; temp >= 10; temp /= 10)
    {
        first = temp / 10;
    }
    first = temp;

    // Sum of middle digits
    for (temp = num / 10; temp > 9; temp /= 10)
    {
        meanSum += temp % 10;
    }

    if ((first + last) == meanSum)
        printf("%d is a Xylem Number\n", num);
    else
        printf("%d is a Phloem Number\n", num);

    return 0;
}