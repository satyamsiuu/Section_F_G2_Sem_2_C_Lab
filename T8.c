#include<stdio.h>
#include<stdlib.h>
void reverser(int *,int);
int main()
{
  int *p;
  unsigned int i, n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  p = (int*)malloc(n*sizeof(int));
  if(p==NULL)
	{
	  printf ("Memory allocation failed\n");
	  free (p);
	  return -1;
	}
  printf("Enter %d elements in the array:-\n", n);
  for (i=0;i<n;i++)
	{
	  printf("Element %d: ",i+1);
	  scanf("%d",p+i);
	}
  reverser(p, n);
  printf ("The reversed array is:-\n");
  for(i=0;i<n;i++)
	{
	  printf("%d ", *(p+i));
	}
  printf("\n");
  free(p);
  return 0;
}

void reverser (int *p, int n)
{
  unsigned i,index;
  printf("Enter index from which array is to be reversed: ");
  scanf("%d",&index);
  for(i=index;i<index+(n-index)/2;i++)
	{
	  *(p+i) = *(p+n-1-i+index) ^ *(p + i);
	  *(p+n-1-i+index) = *(p+n-1-i+index) ^ *(p+i);
	  *(p+i) = *(p+n-1-i+index) ^ *(p+i);
	}
}

