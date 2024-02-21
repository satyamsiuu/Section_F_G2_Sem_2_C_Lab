/*
Q3) Write a C program to convert a decimal number to Hexadecimal using recursion.
*/
#include <stdio.h>
char dth(int);
int main() 
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Hexadecimal equivalent: ");
    dth(decimal);
    printf("\n");
    return 0;
}
char dth(int n)
{
    if (n == 0)
        return 0;
    char hexChar = dth(n / 16);
    int remainder = n % 16;
    if (remainder < 10)
    {
        printf("%d", remainder);
    } else
    {
        printf("%c", remainder - 10 + 'A');
    }
    return hexChar;
}
/*
Output:-

Enter a decimal number: 542
Hexadecimal equivalent: 21E
*/
