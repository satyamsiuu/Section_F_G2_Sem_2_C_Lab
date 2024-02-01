#include<stdio.h>
int main()
{
int a[10][10],r,c,i,j,sum=0;
double avg;
printf("Enter number and columns of the array(max 10,10): ");
scanf("%d%d",&r,&c);
printf("Enter elements in the array:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
sum+=a[i][j];
}
}
avg = (double)sum/(r*c);
printf("\nSum of all elements = %d\nAverage of all elements = %.2f\n",sum,avg);
return 0;
}
