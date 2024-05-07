#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
char name[100];
unsigned int age;
float totalmarks;
}st;

int main()
{
st *p;
unsigned int n,i;
float average=0;
printf("Enter number of records to be entered: ");
scanf("%d",&n);
p = (st*)malloc(n*sizeof(st));

if(p==NULL)
{
printf("Memory allocation failed\n");
free(p);
return 1;
}

for(i=0;i<n;i++)
{
printf("\nEnter details of student %d:-\nName: ",i+1);
scanf(" %[^\n]",(p+i)->name);
printf("Age: ");
scanf("%d",&(p+i)->age);
printf("Total marks: ");
scanf("%f",&(p+i)->totalmarks);
average+=(p+i)->totalmarks;
}
average/=n;

printf("\nThe details of all students are:-\n");
for(i=0;i<n;i++)
{
printf("\nStudent %d:-\nName: %s\nAge: %d\nTotal Marks: %f\n",i+1,(p+i)->name,(p+i)->age,(p+i)->totalmarks);
}

free(p);

printf("\nThe average total marks of all students are: %f\n",average);

return 0;
}


