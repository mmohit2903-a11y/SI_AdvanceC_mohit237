//" The Celebrity Problem "
#include <stdio.h>

#define N 4

// Example "knows" matrix
// knows[a][b] = 1 means a knows b
int knows[N][N] = {
    {0, 1, 1, 1},
    {0, 0, 1, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 0}   // person 3 is celebrity
};

int knowsFunc(int a, int b) 
{
    return knows[a][b];
}

int findCelebrity() 
{
    int a = 0, b = N - 1;

    // Step 1: Find candidate
    while (a < b) {
        if (knowsFunc(a, b))
            a++;   // a can't be celebrity
        else
            b--;   // b can't be celebrity
    }

    int c = a;

    // Step 2: Verify candidate
    for (int i = 0; i < N; i++) {
        if (i != c) {
            if (knowsFunc(c, i) || !knowsFunc(i, c))
                return -1;
        }
    }

    return c;
}

int main() 
{
    int celeb = findCelebrity();

    if (celeb == -1)
        printf("No Celebrity\n");
    else
        printf("Celebrity is person %d\n", celeb);

    return 0;
}