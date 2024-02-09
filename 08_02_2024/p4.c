#include<string.h>
#include<stdio.h>
int main()
{
char s[40];
int i,l=0;
puts("Enter a string: ");
fgets(s,40,stdin);
while(s[l]!='\n'&&s[l]!='\0')
{
l++;
}
for(i=0;i<l/2;i++)
{
char temp = s[i];
s[i]=s[l-1-i];
s[l-1-i]=temp;
}
printf("The new string is: ");
puts(s);
return 0;
}


