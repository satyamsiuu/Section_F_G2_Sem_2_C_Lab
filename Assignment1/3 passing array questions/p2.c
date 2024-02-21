/*
Q2)Write a C program to input a 2D array and calculate the trace of the matrix and print it by using function.
*/
#include <stdio.h>
int calculateTrace(int[][10],int);
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
    int trace = calculateTrace(matrix, order);
    if (trace != -1) 
    {
        printf("Trace of the matrix: %d\n", trace);
    }
    return 0;
}
int calculateTrace(int mat[][10], int order) 
{
    if (order <= 0) 
    {
        printf("Invalid matrix order.\n");
        return -1;
    }
    int trace = 0;
    for (int i = 0; i < order; i++)
    {
        trace += mat[i][i];
    }
    return trace;
}
/*
Output:-

Enter the order of the square matrix: 4
Enter the elements of the matrix:
1 2 3 4
5 6 7 8
9 01 11 12
13 14 15 16
Trace of the matrix: 34
*/
