#include<stdio.h>
#include<string.h>
void frequency(char[]);
int main()
{
char c[50];
printf("Enter a string: ");
fgets(c,50,stdin);
frequency(c);
return 0;
}
void frequency(char c[])
{
int i=0,l=0,m=0,count;
while(c[i]!='\0'&&c[i]!='\n')
{
char ch = c[i];
if(ch!=' ')
{
count=1;
l=i+1;
while(c[l]!='\0'&&c[l]!='\n')
{
if(ch==c[l])
{
count++;
m=l;
while(c[m]!='\0'&&c[m]!='\n')
{
c[m]=c[m+1];
m++;
}
c[m]='\0';
}
l++;
}
printf("\'%c\' is present %d times in the string\n",ch,count);
}
i++;
}
}

