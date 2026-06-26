//Reverse a string.
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // move i to end of string
    while (str[i] != '\0') 
    {
        i++;
    }

    // copy in reverse order
    i = i - 1;
    while (i >= 0) 
    {
        rev[j] = str[i];
        i--;
        j++;
    }

    rev[j] = '\0';  // end string

    printf("Reversed string = %s\n", rev);

    return 0;
}