#include<string.h>
#include<stdio.h>

void reverse(char*);

int main()
{
    char a[100];
    int l;
    
    puts("Enter a string: ");
    fgets(a,100,stdin);
    
    reverse(a);
    
    puts("The reversed string is: ");
    puts(a);
    
    return 0;
}

void reverse(char *a)
{
    int i=0,n,j;
    while(*(a+i)!='\0'&&*(a+i)!='\n')
    {
        n=i;
        while(*(a+i)!=' '&&*(a+i)!='\n')
        {
            i++;
        }
        for(j=0;j<(i-n)/2;j++)
        {
            char c = *(a+n+j);
            *(a+n+j)=*(a+i-j-1);
            *(a+i-j-1)=c;
        }
        i++;
    }
}
