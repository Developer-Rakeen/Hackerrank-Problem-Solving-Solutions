#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    long int *ar,sum=0;
    printf("Enter size:");
    scanf("%d",&n);
    ar=(long int*)malloc(n*sizeof(long int));
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",ar+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(ar+i);
    }
    printf("%ld\n",sum);
    free(ar);
    ar=NULL;
    return 0;
}
