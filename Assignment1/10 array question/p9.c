/*
Q9) Write a C program to input a 2d array and perform mirror reversal operation vertically.
*/
#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,k,temp;
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
    for (i = 0; i < r / 2; i++)
    {
        for (j = 0; j < c; j++) 
        {
            temp = a[i][j];
            a[i][j] = a[r - 1 - i][j];
            a[r - 1 - i][j] = temp;
        }
    }
    printf("Mirror Reversed Array (Vertically):\n");
    for (i = 0; i < r; i++) 
    {
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
Mirror Reversed Array (Vertically):
7 8 9 
4 5 6 
1 2 3 
*/
