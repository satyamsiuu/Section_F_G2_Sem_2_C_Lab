#include<string.h>
#include<stdio.h>
int anagram(char*,char*);
int main()
{
    char a[100],b[100],*c,*d;
    c=a;
    d=b;
    printf("Enter first String: ");
    fgets(a,100,stdin);
    printf("Enter second string: ");
    fgets(b,100,stdin);
    int l1 = strlen(a);
    int l2 = strlen(b);
    if(l1==l2)
    anagram(c,d);
    else
    {
    *(c+l1-1)='\0';
    *(d+l2-1)='\0';
    printf("%s and %s are not anagram\n",a,b);
    }
    return 0;
}
int anagram(char *a,char *b)
{
    int ctr,c=0;
    int str1[256] = {0},str2[256] = {0}; 
    for(ctr=0;*(a+ctr)!='\0';ctr++)  
    {
        str1[*(a+ctr)]++;
    }
    for(ctr=0;*(b+ctr)!='\0';ctr++)
    {
        str2[*(b+ctr)]++;
    }
    for(ctr=0;ctr<256;ctr++)
    {
        if(str1[ctr]!=str2[ctr])
        c++;
    }
    if(c==0)
    printf("Anagram\n");
    else
    printf("Not anagram\n");
}
