#include<stdio.h>
#include<string.h>
int frequency(char[],char);
int main()
{
char c[40],s;
printf("Enter a string: ");
fgets(c,40,stdin);
printf("Enter character to be searched: ");
scanf("%c",&s);
int res = frequency(c,s);
if(res>0)
printf("\'%c\' is present %d times in the array\n",s,res);
else
printf("Character not found in the string\n");
return 0;
}
int frequency(char c[],char s)
{
int i=0,res=0;
while(c[i]!='\0'&&c[i]!='\n')
{
if(c[i]==s)
res++;
i++;
}
return res;
}



