#include<stdio.h> 

void reverse(int*,int);

int main()
{
int a[100],n,i,*p;

printf("Enter size of array: ");
scanf("%d",&n);

p=a;

printf("Enter elements in the array:-\n");
for(i=0;i<n;i++)
scanf("%d",p+i);

reverse(p,n);

printf("The reversed array is:-\n");
for(i=0;i<n;i++)
printf("%d ",*(p+i));

printf("\n");

return 0;
}
void reverse(int *p,int n)
{

for(int i=0;i<n/2;i++)
{

int temp = *(p+i);
*(p+i) = *(p+(n-i-1));
*(p+(n-i-1)) = temp;

}

}


