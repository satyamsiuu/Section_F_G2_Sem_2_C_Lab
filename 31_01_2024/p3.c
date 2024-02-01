#include<stdio.h>
int prime(int);
void count(int);
int main()
{
    int a[1000],n,i,counter=0;
    printf("\nEnter limit of array: ");
    scanf("%d",&n);
    printf("Enter elements in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        counter+=prime(a[i]);
    }
    count(counter);
    return 0;
}
int prime(int n)
{
    int c=0;
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
            c++;
        }
        if(c==2)
        {
            printf("%d is a prime number\n",n);
            return 1;
        }
        else
        {
            printf("%d is not a prime number\n",n);
            return 0;
        }
}
void count(int n)
{
    printf("\nNumber of prime numbers = %d\n",n);
}
