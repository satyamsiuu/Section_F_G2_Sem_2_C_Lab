#include<stdio.h>
int main()
{
int a[10][10],p[10][10],n[10][10],o[10][10],r,c,i,j,zero=0,neg=0,pos=0;
printf("Enter number and columns of the array(max 10,10): ");
scanf("%d%d",&r,&c);
printf("Enter elements in the array:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]>0)
{
p[0][pos]=a[i][j];
pos++;
}
else if(a[i][j]<0)
{
n[0][neg]=a[i][j];
neg++;
}
else
{
o[0][zero]=a[i][j];
zero++;
}
}
}
if(pos>0)
{
printf("\nAll the positive elements are:-\n");
for(i=0;i<pos;i++)
{
printf("%d ",p[0][i]);
}
}
if(neg>0)
{
printf("\nAll the negative elements are:-\n");
for(i=0;i<neg;i++)
{
printf("%d ",n[0][i]);
}
}
if(zero>0)
{
printf("\nAll the zero elements are:-\n");
for(i=0;i<zero;i++)
{
printf("%d ",o[0][i]);
}
}
printf("\n");
return 0;
}
