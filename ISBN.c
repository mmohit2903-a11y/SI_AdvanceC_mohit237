//ISBN (International Standard Book Number) ek unique identification number hota hai jo books ko identify karne ke liye use kiya jata hai.
// Aajkal ISBN aam taur par 13 digits ka hota hai.
#include <stdio.h>

int main()
{
    long long isbn;
    int pos = 1, rem;
    int checkDigit, sum = 0;

    printf("Enter 13-digit ISBN: ");
    scanf("%lld", &isbn);

    checkDigit = isbn % 10;  // Last digit
    isbn /= 10;

    while (isbn > 0)
    {
        rem = isbn % 10;

        // Right se count karte hue:
        // 12th,10th,8th... digits ×1
        // 11th,9th,7th... digits ×3
        if (pos % 2 == 1)
            sum += rem * 3;
        else
            sum += rem;

        isbn /= 10;
        pos++;
    }

    int calculated = (10 - (sum % 10)) % 10;

    if (calculated == checkDigit)
        printf("Valid ISBN\n");
    else
        printf("Invalid ISBN\n");

    return 0;
}