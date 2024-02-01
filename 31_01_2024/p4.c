#include<stdio.h>
void pallindrome(int);
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
        pallindrome(a[i]);
    }
    return 0;
}
void pallindrome(int n)
{
    int c =n;
    int rev=0;
    while(c!=0)
    {
        int d = c%10;
        rev = rev*10 + d;
        c=c/10;
    }
    if(rev==n)
    printf("%d is a pallindrome number\n",n);
    else
    printf("%d is not a pallindrome number\n",n);
}
