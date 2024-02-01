#include<stdio.h>
int sum(int);
int main()
{
int n,res;
printf("\nEnter a number: ");
scanf("%d",&n);
res = sum(n);
printf("\nSum of digits is %d\n",res);
return 0;
}
int sum(int n)
{
int rem;
rem = n%10;
if(n==0)
return 0;
else
return (rem+sum(n/10));
}

