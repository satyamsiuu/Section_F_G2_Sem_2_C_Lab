#include<stdio.h>
#include<string.h>
void concat(char[],char[]);
int main()
{
char a[100],b[50];
int l1,l2;
printf("Enter string 1: ");
fgets(a,100,stdin);
printf("Enter string 2: ");
fgets(b,100,stdin);
concat(a,b);
return 0;
}
void concat(char a[],char b[])
{
int l1=0,l2=0;
while(a[l1]!='\0'&&a[l1]!='\n')
l1++;
while(b[l2]!='\0'&&b[l2]!='\n')
l2++;
for(int i=0;i<=l2;i++)
{
a[l1]=b[i];
l1++;
}
a[l1]='\0';
printf("Merged String: ");
puts(a);
}
