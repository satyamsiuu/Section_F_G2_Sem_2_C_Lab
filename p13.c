#include<string.h>
#include<stdio.h>
int main()
{
char s[40];
int l=0;
puts("Enter a string: ");
fgets(s,40,stdin);
while(s[l]!='\n'&&s[l]!='\0')
{
if(s[l]>=97&&s[l]<=122)
s[l]-=32;
l++;
}
printf("The new string is: ");
puts(s);
return 0;
}


