/*
Q2)Write a C program to reverse a string by taking array using character poninter using function
*/

#include<stdio.h>
#include<string.h>

//Declaring function
void reverse(char*,int);

int main()
{

 char a[100];
 int l;
 
 //entering a string
 puts("Enter a string: ");
 fgets(a,100,stdin);
 
 //Calculating length of string
 l = strlen(a)-1;
 
 //calling reverse function
 reverse(a,l);

 //Printing reversed string
 puts("The reversed string is: ");
 puts(a);
 
 return 0;
}

void reverse(char *a,int l)
{

 int i;
 //Reversing the string
 for(i = 0;i<l/2;i++)
 {
  char s = *(a+i);
  *(a+i) = *(a+l-i-1);
  *(a+l-i-1) = s;
 }
 
}
