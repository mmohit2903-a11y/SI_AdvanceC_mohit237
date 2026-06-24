#include <stdio.h>
#include <math.h>
int main() {
int num;
printf("Enter a number to check: ");
scanf("%d", &num);
// --- PART 1: ARMSTRONG CHECKER ---
int isArmstrong = 0;
int tempA = num;
int digits = 0;
int armstrongSum = 0;
while (tempA > 0) {
digits++;
tempA /= 10;
}
tempA = num;
while (tempA > 0) {
armstrongSum += round(pow(tempA % 10, digits));
tempA /= 10;
}
if (armstrongSum == num) {
isArmstrong = 1;
}
// --- PART 2: SPY CHECKER ---
int isSpy = 0;
int tempS = num;
int digitSum = 0;
int digitProduct = 1;
while (tempS > 0) {
int currentDigit = tempS % 10;
digitSum += currentDigit;
digitProduct *= currentDigit;
tempS /= 10;
}
if (digitSum == digitProduct) {
isSpy = 1;
}
// --- FINAL VERDICT ---
if (isArmstrong && isSpy) {
printf("%d is BOTH an Armstrong and a Spy number.\n", num);
} else {
printf("%d is NOT both.\n", num);
}
return 0;
}