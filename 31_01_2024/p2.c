#include<stdio.h>
long double factorial(int);
int main()
{
    long double res,fac=1;
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=0)
    {
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    printf("\nFactorial without recursion is %Lf\n",fac);
    res = factorial(n);
    printf("\nFactorial with recursion = %Lf\n",res);
    }
    else 
    printf("\nInputted number is negative\n");
    return 0;
}
long double factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);

}
