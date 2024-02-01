#include<stdio.h>
int main()
{
int a[10][10],e[10][10],o[10][10],r,c,i,j,sum=0,even=0,odd=0;
printf("Enter number and columns of the array(max 10,10): ");
scanf("%d%d",&r,&c);
printf("Enter elements in the array:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]%2==0)
{
e[0][even]=a[i][j];
even++;
}
else
{
o[0][odd]=a[i][j];
odd++;
}
}
}
printf("\nAll the even elements are:-\n");
for(i=0;i<even;i++)
{
printf("%d ",e[0][i]);
}
printf("\nAll the odd elements are:-\n");
for(i=0;i<odd;i++)
{
printf("%d ",o[0][i]);
}
printf("\n");
return 0;
}
