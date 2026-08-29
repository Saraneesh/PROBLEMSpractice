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
    arr=realloc(arr,(m+n)*sizeof(int));
    for(int i=n;i<m+n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<m+n;i++)
        printf("%d",arr[i]);
    free(arr);
}

