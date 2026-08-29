#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n;
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {

    scanf("%d",&arr[i]);

    }

    int m;
    scanf("%d",&m);
    for(int i=m;i<n-1;i++)
        arr[i]=arr[i+1];

    arr=realloc(arr,(n-1)*sizeof(int));


    for(int i=0;i<n-1;i++)
        printf("%d ",arr[i]);
    free(arr);
}


