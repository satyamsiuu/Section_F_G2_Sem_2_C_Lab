#include<stdio.h>
#include<string.h>
void blank(char[]);
int main()
{
    char c[50];
    printf("Enter a string: ");
    fgets(c,50,stdin);
    blank(c);
    return 0;
}
void blank(char c[])
{
    char n[50];
    int i=0,l=0;
    while(c[i]!='\0'&&c[i]!='\n')
    {
        if(c[i]!=' ')
        {
          n[l]=c[i];
          l++;
        }
        i++;
    }
    n[l]='\0';
    printf("The final string is: ");
    puts(n);
}
