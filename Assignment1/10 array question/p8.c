/*
Q8) Write a C program to input a 2d array and perform mirror reversal operation horizontally.
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
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c / 2; j++) 
        {
            temp = a[i][j];
            a[i][j] = a[i][c - 1 - j];
            a[i][c - 1 - j] = temp;
        }
    }
    printf("Horizonatally Mirror Reversed Array:\n");
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
Horizonatally Mirror Reversed Array:
3 2 1 
6 5 4 
9 8 7 
*/
