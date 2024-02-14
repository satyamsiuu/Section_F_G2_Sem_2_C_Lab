#include<stdio.h>
#include<string.h>
int vowel(char[]);
int consonant(char[]);
int main()
{
char c[40];
printf("Enter a string: ");
fgets(c,40,stdin);
int vowels = vowel(c);
int consonants = consonant(c);
if(vowels>0)
printf("Number of vowels in the string = %d\n",vowels);
else
printf("No vowel is present in the string\n");
if(consonants>0)
printf("Number of consonants in the string = %d\n",consonants);
else
printf("No consonant is present in the string\n");
return 0;
}
int vowel(char c[])
{
int i =0,co=0;
while(c[i]!='\n'&&c[i]!='\0')
{
if(c[i]=='A'||c[i]=='a'||c[i]=='E'||c[i]=='e'||c[i]=='I'||c[i]=='i'||c[i]=='O'||c[i]=='o'||c[i]=='U'||c[i]=='u')
co++;
i++;
}
return co;
}
int consonant(char c[])
{
int i =0,co=0;
while(c[i]!='\n'&&c[i]!='\0')
{
if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))
{
if(c[i]!='A'&&c[i]!='a'&&c[i]!='E'&&c[i]!='e'&&c[i]!='I'&&c[i]!='i'&&c[i]!='O'&&c[i]!='o'&&c[i]!='U'&&c[i]!='u')
co++;
}
i++;
}
return co;
}
