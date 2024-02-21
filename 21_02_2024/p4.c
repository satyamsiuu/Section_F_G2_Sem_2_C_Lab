#include<stdio.h>
int main() 
{
    int a[100],*p,i,n,sum=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    p=a;
    printf("Enter elements in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    printf("Sum of array: %d",sum);
    return 0;
}
