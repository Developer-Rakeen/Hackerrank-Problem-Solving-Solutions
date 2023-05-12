#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,**arr,i,j,sum1=0,sum2=0;
	printf("Enter size:");
	scanf("%d",&n);
	arr=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	{
		*(arr+i)=(int*)malloc(n*sizeof(int));
	}
	printf("Enter %d elements:\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(arr+i)+j);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum1=sum1+*(*(arr+i)+j);
			}
		    if(i+j==n-1)
			{
				sum2=sum2+*(*(arr+i)+j);
			}
		}
	}
	if(sum1<sum2)
	{
		printf("%d\n",sum2-sum1);
	}
	else
	{
		printf("%d\n",sum1-sum2);
	}
	for(i=0;i<n;i++)
	{
		free(*(arr+i));
	}
	free(arr);
	arr=NULL;
	return 0;
}