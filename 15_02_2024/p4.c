#include<stdio.h>
#include<string.h>
void logicreverse(char[]);
int main()
{
    char c[100];
    printf("Enter a string: ");
    fgets(c,50,stdin);
    logicreverse(c);
    return 0;
}
void logicreverse(char c[])
{
    char a[100];
    int i=0,l=0,d=0,j,v;
    while(c[l]!='\0'&c[l]!='\n')
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        v=i;
        while(c[i]!=' '&&i!=-1)
        {
            i--;
        }
        for(j=i+1;j<=v;j++)
        {
            a[d]=c[j];
            d++;
        }
        a[d]=' ';
        d++;
    }
    a[d]='\0';
    printf("The required string is: ");
    puts(a);
}
