/*
Q3)Write a C program to input a 2D array pass it to another function and calculate the sum of the secondary diagonal of that matrix.
*/
#include <stdio.h>
int calculateSecondaryDiagonalSum(int[][10],int);
int main() 
{
    int order;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &order);
    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < order; i++) 
    {
        for (int j = 0; j < order; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int secondaryDiagonalSum = calculateSecondaryDiagonalSum(matrix, order);
    if (secondaryDiagonalSum != -1)
    {
        printf("Sum of the secondary diagonal: %d\n", secondaryDiagonalSum);
    }
    return 0;
}

int calculateSecondaryDiagonalSum(int mat[][10], int order) 
{
    if (order <= 0) 
    {
        printf("Invalid matrix order.\n");
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < order; i++)
    {
        sum += mat[i][order - i - 1];  // Accessing elements along the secondary diagonal
    }
    return sum;
}
/*
Output:-

Enter the order of the square matrix: 4
Enter the elements of the matrix:
1 2 3 4
5 6 7 8
9 01 11 12
13 14 15 16
Sum of the secondary diagonal: 25
*/
