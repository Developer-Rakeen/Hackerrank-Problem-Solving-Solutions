#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,m,j,count,*result;
	char **s,**q;
	s=(char**)malloc(10000*sizeof(char*));
	q=(char**)malloc(10000*sizeof(char*));
	printf("Enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		*(s+i)=(char*)malloc(10000*sizeof(char));
	}
	printf("Enter %d strings:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",*(s+i));
	}
	printf("Enter size:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		*(q+i)=(char*)malloc(10000*sizeof(char));
	}
	result=(int*)malloc(m*sizeof(int));
	printf("Enter %d strings:\n",m);
	for(i=0;i<m;i++)
	{
		scanf("%s",*(q+i));
	}
	for(i=0;i<m;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(strcmp(*(q+i),*(s+j))==0)
			{
				count++;
			}
		}
		*(result+i)=count;
	}
	for(i=0;i<m;i++)
	{
		printf("%d\n",*(result+i));
	}
	for(i=0;i<n;i++)
	{
		free(*(s+i));
	}
	free(s);
	for(i=0;i<m;i++)
	{
		free(*(q+i));
	}
	free(q);
	free(result);
}