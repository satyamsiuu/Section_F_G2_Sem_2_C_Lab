#include<stdio.h>
#include<string.h>
int pallindrome(char[]);
int main()
{
char c[40];
printf("Enter a string: ");
fgets(c,40,stdin);
if(pallindrome(c))
printf("String is not pallindrome\n");
else
printf("String is pallindrome\n");
return 0;
}
int pallindrome(char c[])
{
char copy[40];
int l=0,i=0;
while(c[l]!='\0'&&c[l]!='\n')
l++;
while(c[i]!='\0'&&c[i]!='\n')
{
copy[i]=c[l-i-1];
i++;
}
i=l=0;
while(c[i]!='\0'&&c[i]!='\n')
{
if(c[i]!=copy[i])
{
l++;
break;
}
i++;
}
return l;
}

