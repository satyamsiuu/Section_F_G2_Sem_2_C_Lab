/*
Q1) Write a C program to convert a binary number to decimal using recursion.
*/
#include <stdio.h>
int btd(int);
int main() 
{
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    int decimal = btd(binary);
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
int btd(int n)
{
    if (n == 0)
    return 0;
    return btd(n/10) * 2 + n%10;
}
/*
Output:-

Enter a binary number: 1101101
Decimal equivalent: 109
*/
