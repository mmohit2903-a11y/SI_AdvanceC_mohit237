//Check if a string is a Palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // find length
    while (str[j] != '\0') 
    {
        j++;
    }

    j = j - 1;  // last index

    // check palindrome
    while (i < j) 
    {
        if (str[i] != str[j]) 
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}