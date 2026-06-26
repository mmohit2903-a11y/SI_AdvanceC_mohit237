//Remove all characters in a string except alphabets.
#include <stdio.h>

int main() 
{
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) 
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("String after removing non-alphabets: %s\n", result);

    return 0;
}