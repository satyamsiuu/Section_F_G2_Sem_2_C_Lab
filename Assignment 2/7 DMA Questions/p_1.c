/*
Enter a string dynamically using pointer without declaring any array and print it.
*/
#include<stdio.h>
#include<stdlib.h>
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
    printf("The string is: %s",p);
    free(p);
    return 0;
}
