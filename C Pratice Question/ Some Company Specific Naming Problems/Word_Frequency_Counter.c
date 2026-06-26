//" Word Frequency Counter 
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Word 
{
    char word[20];
    int count;
} list[MAX];

int size = 0;

// check if word exists
int find(char *w) 
{
    for (int i = 0; i < size; i++) {
        if (strcmp(list[i].word, w) == 0)
            return i;
    }
    return -1;
}

int main() 
{
    char text[] = "apple banana apple orange banana apple";
    char word[20];

    int i = 0, j = 0;

    while (1) 
    {
        if (text[i] == ' ' || text[i] == '\0') 
        {
            word[j] = '\0';

            int idx = find(word);

            if (idx == -1) 
            {
                strcpy(list[size].word, word);
                list[size].count = 1;
                size++;
            } else 
            {
                list[idx].count++;
            }

            j = 0;
            if (text[i] == '\0') break;
        } 
        else 
        {
            word[j++] = text[i];
        }
        i++;
    }

    printf("Word Frequency:\n");
    for (int k = 0; k < size; k++) 
    {
        printf("%s -> %d\n", list[k].word, list[k].count);
    }

    return 0;
}