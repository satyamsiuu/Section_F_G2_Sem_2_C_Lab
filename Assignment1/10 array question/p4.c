/*
Q4) Write a program in C to check whether a given matrix is an identity matrix.
*/
#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,count=0;
    printf("Enter rows and columns in the matrix: ");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf("Enter elements in the matrix:-\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
                if((i==j&&a[i][j]!=1)||(i!=j&&a[i][j]!=0))
                count++;
            }
        }
        if(count==0)
        printf("This Matrix Is An Identity Matrix\n");
        else
        printf("This Matrix Is Not An Identity Matrix\n");
    }
    else
    printf("This Matrix Is Not An Identity Matrix\n");
    return 0;
}
/*
Output:-

Enter rows and columns in the matrix: 3 3
Enter elements in the matrix:-
1 0 0
0 1 0
0 0 1
This Matrix Is An Identity Matrix
*/
