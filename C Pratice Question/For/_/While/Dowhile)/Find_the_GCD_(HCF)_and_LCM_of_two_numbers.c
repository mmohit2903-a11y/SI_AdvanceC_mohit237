//Find the GCD (HCF) and LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, x, y, hcf, lcm;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    lcm = (a * b) / hcf;
    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);
    return 0;
}