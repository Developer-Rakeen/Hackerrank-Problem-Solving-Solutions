#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=3,i,*a,*b,count1=0,count2=0;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	printf("Enter %d elements to 1st size:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("Enter %d elements to 2nd size:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(a+i)>*(b+i))
		{
			count1++;
		}
		else if(*(a+i)<*(b+i))
		{
			count2++;
		}
	}
	printf("%d %d\n",count1,count2);
	free(a);
	free(b);
	a=NULL;
	b=NULL;
	return 0;
}