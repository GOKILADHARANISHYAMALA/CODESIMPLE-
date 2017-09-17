#include<stdio.h>
#include<conio.h>
void main()
{
 int N,i,sum=0;
 printf("\nEnter the integer number:");
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
  sum=sum+i;
 }
 printf("\nsum of %d natural numbers is:%d",N,sum);
}
