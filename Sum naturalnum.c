#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,sum=0;
 printf("\nEnter the integer number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  sum=sum+i;
 }
  printf("\nsum of %d natural numbers is:%d",num,sum);
 
}  
