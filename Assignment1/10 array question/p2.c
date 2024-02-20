/*
Q2) Write a program in C for the multiplication of two square matrices.
*/
#include<stdio.h>
int main()
{
    int m1[10][10],m2[10][10],m3[10][10],r1,c1,r2,c2,i,j,k,sum;
    printf("Enter rows and columns of array 1: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of array 2: ");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter elements in array 1:-\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter elements in array 2:-\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++) 
                {
                    sum=sum+m1[i][k]*m2[k][j];
                }
                m3[i][j]=sum;
            }
        }
        printf("The Final Matrix:-\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices can't be multiplied\n");
    }
    return 0;
}
/*
Output:-

Enter rows and columns of array 1: 3 3
Enter rows and columns of array 2: 3 2
Enter elements in array 1:-
4 5 6 
7 8 9
1 2 3 
Enter elements in array 2:-
1 2
3 4
5 6
The Final Matrix:-
49 64 
76 100 
22 28 
*/
