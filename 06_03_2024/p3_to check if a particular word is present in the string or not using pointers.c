/*
Q3)Write a c-program to check if a particular word is present in the string or not by using function.
*/

#include<string.h>
#include<stdio.h>

void search(char*,char*,int,int);

int main()
{

 char a[100],b[50];
 int l1,l2;
 
 puts("Enter a string: ");
 fgets(a,100,stdin);
 
 puts("Enter word to be searched in the string :");
 fgets(b,50,stdin);
 
 l1 = strlen(a)-1;
 l2 = strlen(b)-1;
 
 search(a,b,l1,l2);
 
 return 0;
}
  
void search(char *c,char *d,int l1,int l2)
{
 int j,f,g,i;
 for(i=0;i<l1-l2+1;i++)
 {
  j=0;
  f=0;
  if(*(c+i)==*(d+j))
  {
   g=i+1;
   j++;
   while(j<l2)
   {
    if(*(c+g)!=*(d+j))
    {
     f=1;
     break;
    }
    g++;
    j++;
   }
   if(f==0)
   {
    printf("The word is present in the string\n");
    f=1;
    break;
   }
  } 
 }
 if(f==0)
 {
  printf("The word is not present in the string\n");
 }
}
