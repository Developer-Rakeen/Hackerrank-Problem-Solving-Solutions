#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*arr,countp=0,countn=0,countz=0;
	printf("Enter size:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		if(0<*(arr+i))
		{
			countp++;
		}
		else if(0==*(arr+i))
		{
			countz++;
		}
		else if(0>*(arr+i))
		{
			countn++;
		}
	}
	printf("%f\n",(float)countp/n);
	printf("%f\n",(float)countn/n);
	printf("%f\n",(float)countz/n);
	free(arr);
	arr=NULL;
	return 0;
}