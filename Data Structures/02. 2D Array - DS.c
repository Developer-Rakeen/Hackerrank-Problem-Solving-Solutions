#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,rows=6,columns=6,*sum,**arr,highest;
	sum=(int*)malloc(16*sizeof(int));
	arr=(int**)malloc(rows*sizeof(int*));
	for(i=0;i<rows;i++)
	{
		*(arr+i)=(int*)malloc(columns*sizeof(int));
	}
	printf("Enter %d elements:\n",rows*columns);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",*(arr+i)+j);
		}
	}
	k=0;
	for(i=0;i<rows-2;i++)
	{
		for(j=0;j<columns-2;j++)
		{
			*(sum+k)=*(*(arr+i)+j)+*(*(arr+i)+(j+1))+*(*(arr+i)+(j+2))+*(*(arr+(i+1))+(j+1))+*(*(arr+(i+2))+j)+*(*(arr+(i+2))+(j+1))+*(*(arr+(i+2))+(j+2));
			k++;
		}
	}
	highest=*(sum+0);
	for(i=0;i<k;i++)
	{
		if(*(sum+i)>highest)
		{
			highest=*(sum+i);
		}
	}
	printf("%d\n",highest);
	free(sum);
	for(i=0;i<rows;i++)
	{
		free(*(arr+i));
	}
	free(arr);
	sum=NULL;
	arr=NULL;
	return 0;
}