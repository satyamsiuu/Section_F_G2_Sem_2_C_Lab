/* 
Q1)Write a C program to merge two different array into one array using pointers.
*/

#include<stdio.h>

int main()
{
 
 int a[200],b[100],l1,l2,i,*c,*d;
 
 c=a;
 d=b;
 
 //Entering elements in first array
 
 printf("Enter size of first array: ");
 scanf("%d",&l1);
 
 printf("Enter elements in first array:-\n");
 for(i=0;i<l1;i++)
 {
  scanf("%d",c+i);
 }
 
 //Entering elements in second array
 
 printf("Enter size of second array: ");
 scanf("%d",&l2);
 
 printf("Enter elements in second array:-\n");
 for(i=0;i<l2;i++)
 {
  scanf("%d",d+i);
 }
 
 //Merging second array in first
 
 for(i=0;i<l2;i++)
 {
  *(c+l1+i)=*(d+i);
 }
 
 //Printing the merged array
 
 printf("The new merged array is:-\n");
 for(i=0;i<l1+l2;i++)
 {
  printf("%d ",*(c+i));
 }
 
 printf("\n");
 
 return 0;
 
}
