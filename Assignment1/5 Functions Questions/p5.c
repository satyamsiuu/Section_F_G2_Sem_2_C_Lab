/*
Q5) Write a program in C to check whether two given strings are an anagram.
*/
#include <stdio.h>
#include <string.h>
int checkAnagram(char str1[], char str2[]);
int main() 
{
    char str1[100], str2[100];
    printf("Input the first String: ");
    fgets(str1, sizeof str1, stdin);
    printf("Input the second String: ");
    fgets(str2, sizeof str2, stdin);
    if (checkAnagram(str1, str2) == 1) 
    {
        str1[strlen(str1) - 1] = '\0';
        str2[strlen(str2) - 1] = '\0';
        printf("%s and %s are Anagram.\n\n", str1, str2);
    } 
    else 
    {
        str1[strlen(str1) - 1] = '\0';
        str2[strlen(str2) - 1] = '\0';
        printf("%s and %s are not Anagram.\n\n", str1, str2);
    }
    return 0;
}

int checkAnagram(char str1[], char str2[])
{
    int str1ChrCtr[256] = {0}, str2ChrCtr[256] = {0};
    int ctr;

    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }

    for (ctr = 0; str1[ctr] != '\0'; ctr++)
    {
        str1ChrCtr[str1[ctr]]++;
    }

    for (ctr = 0; str2[ctr] != '\0'; ctr++)
    {
        str2ChrCtr[str2[ctr]]++;
    }

    for (ctr = 0; ctr < 256; ctr++) 
    {
        if (str1ChrCtr[ctr] != str2ChrCtr[ctr])
            return 0;
    }

    return 1;
}
/*
Output:-

Input the first String: peras
Input the second String: spare
peras and spare are Anagram.
*/
