#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,d,t,*a,n;
	printf("Enter size and 1 number:");
	scanf("%d%d",&n,&d);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<d;i++)
	{
		t=*(a+0);
		for(j=1;j<n;j++)
		{
			*(a+(j-1))=*(a+j);
		}
		*(a+(n-1))=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	free(a);
	a=NULL;
	return 0;
}