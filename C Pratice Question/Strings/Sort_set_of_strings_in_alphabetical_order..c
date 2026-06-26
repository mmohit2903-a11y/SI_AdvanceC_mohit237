//Sort a set of strings in alphabetical order.
#include <stdio.h>

int main() 
{
    char str[10][50], temp[50];
    int n, i, j, k;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%s", str[i]);
    }

    // Sorting (Bubble Sort)
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {

            // compare two strings
            k = 0;
            while (str[i][k] == str[j][k] && str[i][k] != '\0' && str[j][k] != '\0') 
            {
                k++;
            }

            if (str[i][k] > str[j][k])
            {
                // swap strings manually
                int x = 0;
                while (str[i][x] != '\0') 
                {
                    temp[x] = str[i][x];
                    x++;
                }
                temp[x] = '\0';

                x = 0;
                while (str[j][x] != '\0') 
                {
                    str[i][x] = str[j][x];
                    x++;
                }
                str[i][x] = '\0';

                x = 0;
                while (temp[x] != '\0') 
                {
                    str[j][x] = temp[x];
                    x++;
                }
                str[j][x] = '\0';
            }
        }
    }

    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s\n", str[i]);
    }

    return 0;
}