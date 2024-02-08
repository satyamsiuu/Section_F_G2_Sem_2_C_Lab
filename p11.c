#include<string.h>
#include<stdio.h>
int main()
{
char s[40];
int l=0;
puts("Enter a string: ");
fgets(s,40,stdin);
while(s[l]!='\n'&&s[l]!='\0')
l++;
printf("Length of string = %d\n",l);
return 0;
}


