/*
Q1) Write a program in C to print all unique elements in an array.
*/
#include<stdio.h>
int main()
{
    int a[100],n,i,j,count;
    printf("Enter limit of array: ");
    scanf("%d",&n);
    printf("Input elements in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("All the unique elements in the array are: ");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
           if(a[i]==a[j]) 
           count++;
        }
        if(count==1)
        printf("%d ",a[i]);
    }
    return 0;
}
/*
Output:-

Enter limit of array: 10
Input elements in the array:-
1 3 5 3 7 9 5 0 1 2
All the unique elements in the array are: 7 9 0 2
*/
