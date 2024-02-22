#include<stdio.h> 

int main()
{
int a[100],n,i,*p,min,max;

printf("Enter size of array: ");
scanf("%d",&n);

p=a;

printf("Enter elements in the array:-\n");
scanf("%d",p);
min=max=*p;

for(i=1;i<n;i++)
{
scanf("%d",p+i);
if(*(p+i)>max)
max=*(p+i);
if(*(p+i)<min)
min=*(p+i);
}

printf("The largest element: %d\nThe smallest element : %d\n",max,min);

return 0;
}

