/*
Q1)Write a C program to input two string, pass these strings to a function and check if these two strings are pallindrome or not by taking a character pointer
Q2)Write a C program to reverse a string by taking array using character poninter using function
Q3)Write a C program to merge two different strings if they are equal by using character pointers
Extra Q)Write a C program to check if two different strings are anagram or not.
Anagram - An anagram of a string that is formed by the rearrangement of the same set of characters
e.g 1) spear , pears
2) listen , silent
*/
#include<string.h>
#include<stdio.h>

//Declaring function
void pallindrome(char*,char*,int,int);

int main()
{

 char a[100],b[100];
 int l1,l2;

 //Enering both strings
 puts("Enter first string: ");
 fgets(a,100,stdin);
 puts("Enter second string: ");
 fgets(b,100,stdin);

 //Calculating length od strings
 l1 = strlen(a);
 l2 = strlen(b);

 //calling pallindrome function
 pallindrome(a,b,l1,l2);

 return 0;
 }

void pallindrome(char *a,char *b,int l1,int l2)
{

 int f1 = 0,f2 = 0;

 //Checking if first string is pallindrome or not
 for(int i=0;i<l1-1;i++)
 {
  if((a+i)!=(a+l1-2-i))
  {
   f1++;
   break;
  }
 }
 
 if(f1==0)
  printf("First string is pallindrome\n");
 else
  printf("First string is not pallindrome\n");


 //Checking if second string is pallindrome or not
 for(int i=0;i<l2-1;i++)
 {
  if((b+i)!=(b+l2-2-i))
  {
   f2++;
   break;
  }
 }
 
 if(f2==0)
  printf("Second string is pallindrome\n");
 else
  printf("Second string is not pallindrome\n");

}
