#include<stdio.h>
int main() 
{
    int a[100],*p,i,n,en=0,on=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    p=a;
    printf("Enter elements in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(*(p+i)%2==0)
        en++;
        else
        on++;
    }
    printf("Number of even numbers: %d\n",en);
    printf("Number of odd numbers: %d\n",on);
    return 0;
}
