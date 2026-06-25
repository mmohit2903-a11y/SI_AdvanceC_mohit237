//Convert a string to lowercase/uppercase.
#include <stdio.h>
int main() 
{
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to lowercase and print
    printf("Lowercase: ");
    i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            printf("%c", str[i] + 32);
        } 
        else 
        {
            printf("%c", str[i]);
        }
        i++;
    }

    // Convert to uppercase and print
    printf("Uppercase: ");
    i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            printf("%c", str[i] - 32);
        }
        else
        { 
            printf("%c", str[i]);
        }
        i++;
    }

    return 0;
}