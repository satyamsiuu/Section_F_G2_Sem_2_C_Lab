 /*
Q3)Write a C program to merge two different strings if they are equal by using character pointers
*/

#include<stdio.h>
#include<string.h>

//Declaring function
void merger(char*,char*,int);

int main()
{
 
 //Declaring strings,pointers,and lengths
 char a[200],b[100],f=0,*c,*d;
 int l1,l2;
 
 //assigning arrays base address to pointers
 c=a;
 d=b;
 
 //Entering two strings
 puts("Enter first string: ");
 fgets(a,200,stdin);
 puts("Enter second string: ");
 fgets(b,100,stdin);

 //calculating length of both strings
 l1 = strlen(a)-1;
 l2 = strlen(b)-1;
 
 if(l1==l2)
 {
  for(int i=0;i<l1;i++)
  {
   if(*(c+i)!=*(d+i))
   {
    f++;
    break;
   }
  }
  if(f==1)
   printf("Strings are not equal\n");
  else
  {
   merger(a,b,l1);
   
   puts("The merged string is: ");
   puts(a);
  }
 }
 else
 {
  printf("Strings are not equal\n");
 }
 return 0;
}

void merger(char *a,char *b,int l)
{
 
 //Initialising a loop variable   
 int i=0;
 
 //logic for merging the secong string to first 
 while(*(b+i)!='\0'&&*(b+i)!='\n')
 {
  *(a+l+i)=*(b+i);
  i++;
 }
 
 //Storing last charcter of array as null to make it a string
 *(a+l+i) = '\0';
}   
