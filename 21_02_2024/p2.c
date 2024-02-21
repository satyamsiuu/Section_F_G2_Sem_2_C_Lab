#include<stdio.h>
#include<string.h>
void search(char[],char);
int main()
{
char a[100],c;
printf("Enter a string: ");
fgets(a,100,stdin);
printf("Enter character to be searched: ");
scanf("%c",&c);
search(a,c);
return 0;
}
void search(char a[],char c)
{
int i=0,t=0,p;
while(a[i]!='\0'&&a[i]!='\n')
{
p=0;
if(a[i]==c)
{
t++;
p++;
}
if(t==1)
{
printf("The character is present in the array at indices: ");
t++;
}
if(p==1)
printf("%d,",i);
i++;
}
if(t>0)
printf("\b\n");
if(t==0)
printf("Character Not present in the array\n");
}
