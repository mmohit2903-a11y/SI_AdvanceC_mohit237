#include <stdio.h>
int main() 
{
int num;

printf("Enter a number to check: ");
scanf("%d", &num);

// --- PART 1: XYLEM CHECKER ---
int isXylem = 0;

if (num >= 100) 
{ // Xylem validation requires middle digits
int tempX = num;
int extreme_sum = 0;
int mean_sum = 0;
extreme_sum += tempX % 10;
tempX /= 10;

while (tempX > 9) 
{
mean_sum += tempX % 10;
tempX /= 10;
}

extreme_sum += tempX;

if (extreme_sum == mean_sum) 
{
isXylem = 1;
}
}

// --- PART 2: NEON CHECKER ---

int isNeon = 0;
int square = num * num;
int neonSum = 0;

while (square > 0) 
{
neonSum += square % 10;
square /= 10;
}

if (neonSum == num) 

{
isNeon = 1;
}

// --- FINAL VERDICT ---

if (isXylem && isNeon) 

{
printf("%d is BOTH a Xylem and a Neon number.\n", num);
} 

else 

{
printf("%d is NOT both. (Xylem Status: %s, Neon Status: %s)\n",num, isXylem ? "Yes" : "No", isNeon ? "Yes" : "No");
}

return 0;
}