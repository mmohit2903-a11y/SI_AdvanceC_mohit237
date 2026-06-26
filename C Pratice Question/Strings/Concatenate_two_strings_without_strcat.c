//Concatenate two strings without strcat.
#include <stdio.h>
int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // move i to end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // copy str2 into str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // end the final string

    printf("Concatenated string = %s\n", str1);
    return 0;
}