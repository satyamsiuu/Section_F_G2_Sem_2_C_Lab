/*
. Write a C program using dma to replace each lowercase letter with the same uppercase letter of a given string.
Return the newly created string.
*/
#include<stdio.h>
#include<stdlib.h>
void toggler(char*);
int main()
{
    char *p=NULL;
    int l=0,c;
    printf("Enter a string: ");
    while((c = getchar())!='\n')
    {
        p = realloc(p,(l+1)*sizeof(char));
        if(p==NULL)
        {
            printf("Memory reallocation failed\n");
            free(p);
            return 1;
        }
        *(p+l)=c;
        l++;
    }
    *(p+l)='\0';
    toggler(p);
    printf("String after toggling: %s",p);
    free(p);
    return 0;
}
void toggler(char* p)
{
    int i=0;
    while(*(p+i)!='\0')
    {
        if((*(p+i)>='a')&&(*(p+i)<='z'))
            *(p+i)-=32;
        i++;
    }
}
