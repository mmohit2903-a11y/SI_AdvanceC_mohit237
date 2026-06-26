//Calculate the sum of digits of a number.
#include<stdio.h>
int main()
{
    int rem,sum=0,num;
    printf("Enter number");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits: %d",sum);
    return 0;
}