/*
Q2) Write a C program to convert a decimal number to binary using recursion.
*/
#include <stdio.h>
int dtb(int);
int main() 
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    int binary = dtb(decimal);
    printf("Binary equivalent: %d\n", binary);
    return 0;
}
int dtb(int n)
{
    if (n == 0)
        return 0;
    return dtb(n / 2) * 10 + n % 2;
}
/*
Output:-

Enter a Decimal number: 109
Binary equivalent: 1101101
*/
