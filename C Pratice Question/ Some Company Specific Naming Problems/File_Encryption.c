//File Encryption 
#include <stdio.h>

int main() 
{
    FILE *f1, *f2;
    char ch;
    int key = 123;

    // open original file
    f1 = fopen("input.txt", "r");

    // encrypted output file
    f2 = fopen("output.txt", "w");

    if (f1 == NULL) {
        printf("File not found!\n");
        return 0;
    }

    // encryption
    while ((ch = fgetc(f1)) != EOF) 
    {
        ch = ch ^ key;   // XOR encryption
        fputc(ch, f2);
    }

    printf("File Encrypted Successfully!\n");

    fclose(f1);
    fclose(f2);

    return 0;
}