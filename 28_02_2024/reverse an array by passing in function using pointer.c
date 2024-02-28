#include<stdio.h>

void reverse(int*,int);

int main()
{
 int a[10],n,i,*p;

 //Assigning address to pointer
 p=a;

 //Entering size of array
 printf("Enter size of array: ");
 scanf("%d",&n);

 //Entering elements in the array
 printf("Enter elements in the array:-\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",p+i);
 }

 //passing array to function
 reverse(a,n);

 //Printing the array in reverse order

 printf("The sorted array in descending order:-\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",*(p+i));
 }
 printf("\n");

 return 0;

}

void reverse(int *p,int n)
{

 //Arranging the array in reverse order
 for(int i=0;i<n/2;i++)
 {
  int temp = *(p+i);
  *(p+i) = *(p+n-1-i);
  *(p-i+n-1) = temp;
 }

}
