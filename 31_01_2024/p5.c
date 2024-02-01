#include<stdio.h>
void reverse(int[],int);
int main()
{
    int a[1000],n;
    printf("\nEnter limit of array: ");
    scanf("%d",&n);
    printf("Enter elements in the array:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    return 0;
}
void reverse(int a[],int n)
{ 
    for(int i=0;i<n/2;i++)
    {
        int temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("The reversed array is:-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
