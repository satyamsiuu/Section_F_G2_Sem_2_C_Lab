#include<stdio.h>
int main()
{
    char c[40];
    int l=1;
    printf("Enter a word: ");
    scanf("%s",c);
    while(c[l]!='\0'&&c[l]!='\n')
    l++;
    printf("The length of %s is %d.",c,l);
    return 0;
}
