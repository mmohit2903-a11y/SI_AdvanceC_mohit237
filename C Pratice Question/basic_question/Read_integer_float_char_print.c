//Read an integer/float/char and print it
#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    scanf("%d", &i);
    scanf("%f", &f);
    scanf(" %c", &c);  

    printf("%d\n", i);
    printf("%f\n", f);
    printf("%c\n", c);

    return 0;
}