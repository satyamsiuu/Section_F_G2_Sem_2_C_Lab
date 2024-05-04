#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=NULL,num,c=0,i,j,target;
    while((num=getchar())!='\n')
    {
        if(num!=' ')
        {
        p = realloc(p,(c+1)*sizeof(int));
        if(p==NULL)
        {
            printf("Memory not reallocated");
            free(p);
            return 1;
        }
        *(p+c)=num-'0';
        c++;
        }
    }
    scanf("%d",&target);
    for(i=0;i<c-1;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if((*(p+i)+*(p+j))==target)
            {
                printf("%d %d",i,j);
                free(p);
                return 0;
            }
        }
    }
    printf("no two sum\n");
    free(p);
    return 0;
}
