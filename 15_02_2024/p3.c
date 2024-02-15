#include<stdio.h>
#include<string.h>
void checker(char[],char[]);
int main()
{
    char c[100],s[50];
    printf("Enter string 1: ");
    fgets(c,50,stdin);
    printf("Enter string 2: ");
    fgets(s,50,stdin);
    checker(c,s);
    return 0;
}
void checker(char a[],char b[])
{
    int i=0,f=0,l=0;
    while(a[i]!='\n'&&a[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==0)
    {
        printf("Both strings are equal\nAns: ");
        l=0;
        while(b[l]!='\0'&&b[l]!='\n')
        {
            a[i]=b[l];
            l++;
            i++;
        }
        a[i]='\0';
        puts(a);
    }
    else
    {
        printf("Both strings are different\n");
    }
}
