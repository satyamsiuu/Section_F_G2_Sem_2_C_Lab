#include<stdio.h>
#include<stdlib.h>

typedef struct car
{
unsigned int car_id;
char model[100];
double rent_per_day;
}c;

int main()
{
c *p;
unsigned n,i,days;
double total_cost=0;
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
printf("\nEnter details of car %d:-\nId: ",i+1);
scanf("%d",&(p+i)->car_id);
printf("Model: ");
scanf(" %[^\n]",(p+i)->model);
printf("Rent per day: ");
scanf("%lf",&(p+i)->rent_per_day);
}

printf("\nEnter number of days for all cars to be rented: ");
scanf("%d",&days);

for(i=0;i<n;i++)
{
    total_cost+=(p+i)->rent_per_day*days;
}

printf("\nThe Total cost of renting all cars is: %lf",total_cost);

free(p);

return 0;
}
