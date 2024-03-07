#include<string.h>
#include<stdio.h>

void reverser(char*,int,int);

int main()
{
    char a[100];
    int l;
    
    printf("Enter a string: ");
    fgets(a,100,stdin);
    
    l = strlen(a)-1;
    
    reverser(a,0,l);
    
    printf("Your reversed string is: ");
    
    puts(a);
    
    return 0;
}

void reverser(char *a,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    
    char temp = *(a+start);
    *(a+start) = *(a+end);
    *(a+end) = temp;
    
    reverser(a,start+1,end-1);
}
