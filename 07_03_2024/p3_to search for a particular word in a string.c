#include<string.h>
#include<stdio.h>
int search(char*,char*,int,int);
int main()
{
    int res,l1,l2;
    char s[100],a[50];
    printf("Enter a string: ");
    fgets(s,100,stdin);
    l1 = strlen(s)-1;
    printf("Enter the word to be searched: ");
    scanf("%s",a);
    l2 = strlen(a);
    res = search(s,a,l1,l2);
    if(res==1)
        printf("Word found\n");
    else
        printf("Word not found\n");
    return 0;
}
int search(char *s,char *a,int l1,int l2)
{
    int i,f,j,g;
    for(i=0;i<=l1-l2;i++)
    {
        j=0;
        if(*(a+j)==*(s+i))
        {
            f=0;
            g=i+1;
            for(j=1;j<l2;j++)
            {
                if(*(a+j)!=*(s+g))
                {
                    f=1;
                    break;
                }
                g++;
            }
            if(f==0)
                return 1;
        }
    }
    if(f==0)
        return 0;
}
