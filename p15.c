#include<string.h>
#include<stdio.h>
int main()
{
char s[40],c[40];
int i=0,l=0,f=0;
puts("Enter a string: ");
fgets(s,40,stdin);
while(s[l]!='\n'&&s[l]!='\0')
l++;
while(s[i]!='\n'&&s[i]!='\0')
{
c[i]=s[l-i-1];
i++;
}
for(i=0;i<l;i++)
{
if(s[i]!=c[i])
{
f=1;
break;
}
}
if(f==0)
printf("String is pallindrome\n");
else
printf("String is not pallindrome\n");
return 0;
}


