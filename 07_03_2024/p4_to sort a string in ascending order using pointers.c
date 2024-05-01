#include<stdio.h>
#include<string.h>
void sorter(char*,int);
int main()
{
    int l;
    char a[100];
    printf("Enter a string: ");
    fgets(a,100,stdin);
    l = strlen(a)-1;
    sorter(a,l);
    printf("The string in ascending is: ");
    puts(a);
    return 0;
}
void sorter(char* a,int l)
{
    int i,j;
    char temp;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
}
