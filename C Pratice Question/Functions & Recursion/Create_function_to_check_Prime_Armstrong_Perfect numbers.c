//Create a function to check for Prime/Armstrong/Perfect numbers.
#include <stdio.h>

// Function to check Prime
int isPrime(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to check Armstrong
int isArmstrong(int n) {
    int temp = n, sum = 0, rem;

    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}

// Function to check Perfect number
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    if (isPerfect(num))
        printf("Perfect Number\n");
    else
        printf("Not Perfect\n");

    return 0;
}