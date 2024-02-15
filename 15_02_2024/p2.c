#include<stdio.h>
#include<string.h>
void concat(char[],char[]);
int main()
{
char a[50],b[20];
printf("Enter string 1: ");
fgets(a,50,stdin);
printf("Enter string 2: ");
fgets(b,50,stdin);
concat(a,b);
return 0;
}
void concat(char a[],char b[])
{
char copy[50];
int i=0,f=0,l=0;
while(a[i]!='\0'&&a[i]!='\n')
{
copy[i]=a[i];
i++;
}
copy[i]=' ';
l=i+1;
while(b[f]!='\0'&&b[f]!='\n')
{
a[i]=b[f];
copy[l]=b[f];
i++;
f++;
l++;
}
copy[l]=a[i]='\0';
printf("Without space: ");
puts(a);
printf("With space: ");
puts(copy);
}

