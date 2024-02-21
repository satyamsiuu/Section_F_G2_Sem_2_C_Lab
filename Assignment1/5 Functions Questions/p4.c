/*
Q4) Write a C program to convert a Hexadecimal number to Decimal using recursion.
*/
#include <stdio.h>
#include <math.h>
#include<string.h>
int htd(char[],int);
int main()
{
    char hex[10];
    int length;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    length = 0;
    while (hex[length] != '\0'&&hex[length != '\n'])
    {
        length++;
    }
    int decimal = htd(hex, length);
    if (decimal != -1) 
    {
        printf("Decimal equivalent: %d\n", decimal);
    }
    return 0;
}
int htd(char hex[], int length)
{
    if (length == 0) 
    {
        return 0;
    }
    char digit = hex[length - 1];
    int numericValue;
    if (digit >= '0' && digit <= '9') 
    {
        numericValue = digit - '0';
    } 
    else if (digit >= 'A' && digit <= 'F')
    {
        numericValue = 10 + (digit - 'A');
    } 
    else if (digit >= 'a' && digit <= 'f')
    {
        numericValue = 10 + (digit - 'a');
    } 
    else
    {
        printf("Invalid hexadecimal digit: %c\n", digit);
        return -1; // Invalid input
    }
    int decimal = htd(hex, length - 1);
    return decimal + numericValue * pow(16, strlen(hex) - length);
}

/*
Output:-

Enter a Hexadecimal number: 21E
Decimal equivalent: 542
*/
