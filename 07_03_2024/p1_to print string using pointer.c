#include<string.h>
#include<stdio.h>

void printer(char*);
int main()
{
    char a[100];
    
    puts("Enter a string: ");
    fgets(a,100,stdin);
    
    printf("Your string is: ");

    printer(a);
    
    return 0;
}
void printer(char *a)
{
    if(*a=='\n'||*a=='\0')
    {
        return;
    }
    
    printf("%c",*a);
    
    printer(a+1);
}
