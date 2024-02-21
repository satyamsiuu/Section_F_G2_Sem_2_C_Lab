/*
Q10) Write a C program to input a 2d array of order maximum order 3X3 and calculate it's determinant
*/
#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,k,det=0,product;
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
    for (i = 0; i < 3; i++) 
    {
        product = 1;
        j = i;
        for (k = 0; k < 3; k++)
        {
            product *= a[k][j];
            j = (j + 1) % 3;
        }
        det += product;
    }
    for (i = 0; i < 3; i++) 
    {
        product = 1;
        j = 2 - i;
        for (k = 0; k < 3; k++)
        {
            product *= a[k][j];
            j = (j + 2) % 3;
        }
        det -= product;
    }
    printf("Determinant: %d\n", det);
    return 0;
}
/*
Output:-

Enter rows and columns in the matrix: 3 3 
Enter elements in the matrix:-
9 4 5
1 3 0 
8 8 3
Determinant: -11
*/
