//Find the frequency of characters in a string.
#include <stdio.h>
int main() 
{
    char str[200];
    int freq[256] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency
    while (str[i] != '\0') 
    {
        freq[(int)str[i]]++;
        i++;
    }

    // Print frequency of each character
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > 0 && i != '\n') 
        {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}