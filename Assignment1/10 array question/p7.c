/*
Q7) Write a program in C to input a 2d array of order m*n and perform the following operation:-
R3 = 2R2- R1 + 5R3
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
    for (i = 0; i < c; i++)
    {
        a[2][i] = 2 * a[1][i] - a[0][i] + 5 * a[2][i];
    }
    
    printf("Modified Array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
Output:-

Enter rows and columns in the matrix: 3 3 
Enter elements in the matrix:-
1 2 3
4 5 6
7 8 9
Modified Array:
1 2 3 
4 5 6 
42 48 54 
*/
