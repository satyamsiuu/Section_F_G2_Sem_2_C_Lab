#include<stdio.h>
#include<string.h>
int main()
{
int l;
char s[20];
printf("Enter a string: ");
fgets(s,20,stdin);
l = strlen(s)-1;
printf("Length of string : %d\n",l);
return 0;
}

