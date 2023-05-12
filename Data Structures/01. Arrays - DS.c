#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,i,*A;
    printf("Enter size:");
    scanf("%d",&N);
    A=(int*)malloc(N*sizeof(int));
    printf("Enter %d elements:",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",A+i);
    }
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",*(A+i));
    }
    free(A);
    A=NULL;
    return 0;
}
