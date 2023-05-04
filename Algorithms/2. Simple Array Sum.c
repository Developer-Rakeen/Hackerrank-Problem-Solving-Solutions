#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ar,sum=0;
    printf("Enter size:");
    scanf("%d",&n);
    ar=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ar+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(ar+i);
    }
    printf("%d\n",sum);
    free(ar);
    ar=NULL;
    return 0;
}