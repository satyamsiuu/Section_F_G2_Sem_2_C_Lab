#include<stdio.h>
int main() 
{
    int a = 10;
    float b = 3.14;
    double c = 2.718;

    int *a1 = &a;
    float *b1 = &b;
    double *c1 = &c;

    printf("Integer Value: %d, Address: %u\n",a,*a1);
    printf("Float Value: %f, Address: %u\n",b,*b1);
    printf("Double Value: %lf, Address: %u\n",c,*c1);

    return 0;
}
