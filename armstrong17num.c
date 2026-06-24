#include <stdio.h>
#include <math.h>
int main() {
int count = 0;
int num = 1;
int target = 17;
while (count < target) {
int temp = num;
int digits = 0;
int sum = 0;
// 1. Count how many digits the number has
while (temp > 0) {
digits++;
temp /= 10;
}
temp = num;
// 2. Compute the sum of each digit raised to the power of total digits
while (temp > 0) {
int remainder = temp % 10;
// Using round() protects against small decimal inaccuracies in pow()
sum += round(pow(remainder, digits));
temp /= 10;
}
// 3. If sum matches the original number, it's an Armstrong number
if (sum == num) {
count++;
if (count == target) {
printf("The 17th Armstrong number is: %d\n", num);
break;
}
}
num++;
}
return 0;
}