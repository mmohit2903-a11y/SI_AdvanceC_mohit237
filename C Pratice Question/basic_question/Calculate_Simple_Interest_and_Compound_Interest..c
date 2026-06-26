// Calculate Simple Interest and Compound Interest.
#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, Amount;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    printf("Simple Interest = %f\n", SI);
    printf("Compound Interest = %f\n", CI);

    return 0;
}