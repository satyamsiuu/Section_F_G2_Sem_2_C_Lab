#include<stdio.h>
#include<stdlib.h>

typedef struct book
{
char title[100];
char author[50];
float price;
}b;

int main()
{
b *p;
unsigned n,i,m=0,l=0;
float me,le;
printf("Enter number of records to be entered: ");
scanf("%d",&n);
p = (b*)malloc(n*sizeof(b));

if(p==NULL)
{
printf("Memory allocation failed\n");
free(p);
return 1;
}

for(i=0;i<n;i++)
{
printf("\nEnter details of books %d:-\nTitle: ",i+1);
scanf(" %[^\n]",(p+i)->title);
printf("Author: ");
scanf(" %[^\n]",(p+i)->author);
printf("Price: ");
scanf("%f",&(p+i)->price);
if(i==0)
{
me=p->price;
le=p->price;
continue;
}
if((p+i)->price>me)
{
m=i;
me=(p+i)->price;
}
if((p+i)->price<le)
{
l=i;
le=(p+i)->price;
}
}

printf("\nThe Most Expensive Book is:-\nName: %s\nAuthor: %s\nPrice: %f\n",(p+m)->title,(p+m)->author,(p+m)->price);

printf("\nThe Least Expensive Book is:-\nName: %s\nAuthor: %s\nPrice: %f\n",(p+l)->title,(p+l)->author,(p+l)->price);

free(p);

return 0;
}


