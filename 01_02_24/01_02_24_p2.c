#include<stdio.h>
int main()
{
int a[10][10],r,c,i,j;
printf("Enter number and columns of the array(max 10,10): ");
scanf("%d%d",&r,&c);
printf("Enter elements in the array:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nThe array in matrix form is:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}




