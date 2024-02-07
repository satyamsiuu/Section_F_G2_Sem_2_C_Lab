#include<stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);
if((c>=65&&c<=90)||(c>=97&&c<=122))
{
printf("It is an alphalet i.e a ");
if(c>=97)
c=c-32;
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
printf("vowel\n");
else
printf("consonant\n");
}
else if(c>=48&&c<=57)
{
printf("It is a digit\n");
}
else
{
printf("Its a special character\n");
}
return 0;
}


