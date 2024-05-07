#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct cicle
{
double radius;
}c;

int main()
{
c *p;
unsigned int n,i;
double area,perimeter;
printf("Enter number of records to be entered: ");
scanf("%d",&n);
p = (c*)malloc(n*sizeof(c));

if(p==NULL)
{
printf("Memory allocation failed\n");
free(p);
return 1;
}

for(i=0;i<n;i++)
{
printf("\nEnter the radius of Circle %d: ",i+1);
scanf("%lf",&(p+i)->radius);
}

for(i=0;i<n;i++)
{
area= 3.14*pow((p+i)->radius,2);
perimeter = 2*3.14*(p+i)->radius;

printf("\nThe details of circle %d:-\nRadius: %lf\nPerimeter: %lf\nArea: %lf\n",i+1,(p+i)->radius,perimeter,area);
}
free(p);

return 0;
}


