#include<string.h>
#include<stdio.h>
int main()
{
char s[20];
char c;
int i,l,vow=0,cons=0,dig=0,spec=0;
puts("Enter a string");
fgets(s,20,stdin);
l = strlen(s);
for(i=0;i<l-1;i++)
{
c = s[i];
if((c>=65&&c<=90)||(c>=97&&c<=122))
{
if(c>=97)
c=c-32;
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
vow++;
else
cons++;
}
else if(c>=48&&c<=57)
{
dig++;
}
else
{
spec++;
}
}
if(vow>0)
printf("Vowel is present\n");
if(cons>0)
printf("Consonant is present\n");
if(dig>0)
printf("Digit is present\n");
if(spec>0)
printf("Special Character is present\n");
return 0;
}


