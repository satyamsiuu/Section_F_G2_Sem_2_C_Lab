#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
printf("Enter number and columns of the array 1(max 10,10): ");
scanf("%d%d",&r1,&c1);
printf("Enter number and columns of the array 2(max 10,10): ");
scanf("%d%d",&r2,&c2);
if(r1!=r2||c1!=c2)
{
printf("Substraction of array is not possible\n");
}
else
{
printf("\nEnter elements in the array 1:-\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter elements in the array 2:-\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
c[i][j] = a[i][j]-b[i][j];
}
}
printf("\nYour Substracted array is :-\n"); 
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
return 0;
}

