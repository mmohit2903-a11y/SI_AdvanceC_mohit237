//Solve the Tower of Hanoi problem.
#include <stdio.h>
void hanoi(int n, char A, char B, char C) 
{
    if (n == 1) 
    {
        printf("A -> C\n");
        return;
    }

    hanoi(n - 1, A, C, B);
    printf("A -> C\n");
    hanoi(n - 1, B, A, C);
}

int main() 
{
    int n;
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}