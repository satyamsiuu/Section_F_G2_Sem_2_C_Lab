#include<stdio.h>

void callbyvalue(int,int);

void callbyreference(int*,int*);

int main()
{
int a,b;

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);

printf("Before swapping: %d,%d\n",a,b);

printf("Swapping using call by value: ");

callbyvalue(a,b);

callbyreference(&a,&b);

printf("Swapping using call by reference: %d,%d\n",a,b);

return 0;
}

void callbyvalue(int a,int b)
{
int c=a;
a=b;
b=c;

printf("%d,%d\n",a,b);
}

void callbyreference(int *n1,int *n2)
{

int c = *n1;
*n1 = *n2;
*n2 = c;

}
