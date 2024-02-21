/*
Q1)Write a C program to input a 1D array pass it to another function and print the two numbers who's sum is closest to zero.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void closestToZero(int arr[], int size)
{
    if (size < 2) 
    {
        printf("Array should have at least two elements.\n");
        return;
    }
    int closestSum = __INT_MAX__;
    int num1, num2;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++) 
        {
            int currentSum = arr[i] + arr[j];
            if (abs(currentSum) < abs(closestSum)) 
            {
                closestSum = currentSum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    printf("Numbers whose sum is closest to zero: %d and %d\n", num1, num2);
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) 
    {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    closestToZero(arr, size);
    return 0;
}
/*
Output:-

Enter the size of the array: 5 
Enter the elements of the array:
0 6 51 3 5
Numbers whose sum is closest to zero: 0 and 3
*/
