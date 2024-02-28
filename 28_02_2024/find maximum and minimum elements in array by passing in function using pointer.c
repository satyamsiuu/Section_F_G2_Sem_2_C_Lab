#include<stdio.h>

void minmax(int*,int,int*,int*);

int main()
{
 int a[10],n,i,*p,max,min;

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
 
 //Assigning first index value of array in max and min
 max=min=*p;

 //passing array to function
 minmax(a,n,&max,&min);
 
 //printing the maximun and minimum elementy in the array
 printf("The maximum element in the array: %d\n",max);
 printf("The minimum element in the array: %d\n",min);

 return 0;

}

void minmax(int *p,int n,int *max,int *min)
{

 for(int i=0;i<n;i++)
 {
  if(*max<*(p+i))
  {
   *max=*(p+i);
  }
  if(*min>*(p+i))
  {
   *min=*(p+i);
  }
 }
 
}
