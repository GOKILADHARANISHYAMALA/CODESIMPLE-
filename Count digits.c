#include<stdio.h>
#include<conio.h>
void main()
{
int count=0;
long long n;
printf("\nEnter the integer:");
scanf("%lld",&n);
while(n!=0)
{
    n/=10;
    ++count;
}
printf("\nNumber of digits in the integer:%d",count);
}
