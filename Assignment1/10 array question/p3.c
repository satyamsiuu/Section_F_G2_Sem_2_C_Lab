/*
Q3) Write a program in C to find the transpose of a given matrix.
*/
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],r,c,i,j,k;
    printf("Enter rows and columns in the matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter elements in the matrix:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    printf("The Transpose of this matrix:-\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
Output:-

Enter rows and columns in the matrix: 3 3 
Enter elements in the matrix:-
9 4 5
1 3 0
8 8 3
The Transpose of this matrix:-
9 1 8 
4 3 8 
5 0 3 
*/
