#include<stdio.h>

void sorter(int*,int);

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
 sorter(a,n);

 //Printing the array in descending order

 printf("The sorted array in descending order:-\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",*(p+i));
 }
 printf("\n");

 return 0;

}

void sorter(int *p,int n)
{

 int i,j;

 //Arranging the array in descending order
 for(i=0;i<n;i++)
 {
  for(j=0;j<(n-i-1);j++)
  {
   if(*(p+j)<*(p+j+1))
   {
    int temp = *(p+j);
    *(p+j) = *(p+j+1);
    *(p+j+1) = temp;
   }
  }
 }

}
