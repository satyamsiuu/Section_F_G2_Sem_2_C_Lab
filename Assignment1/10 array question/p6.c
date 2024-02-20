/*
Q6) Write a program in C input a matrix and arrange all rows in ascending order.
*/
#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,k;
    printf("Enter rows and columns in the matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter elements in the matrix:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        for(k=0;k<r-1;k++)
        {
            if(a[i][k]>a[i][k+1])
            {
            int temp = a[i][k];
            a[i][k] = a[i][k+1];
            a[i][j+1] = temp;
            }
        }
    }
    }
    printf("The Final Matrix:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
Output:-

Enter rows and columns in the matrix: 3 3 
Enter elements in the matrix:-
89 42 56
23 45 90
76 34 76
The Final Matrix:-
42 56 89 
23 45 90 
34 76 76
*/
