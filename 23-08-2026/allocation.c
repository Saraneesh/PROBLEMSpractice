#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n;
    int count=0;
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));\

    for(int i=0;i<n;i++)
    {

    scanf("%d",&arr[i]);
    if(arr[i]==0)
        count++;
    }
    printf("%d",count);

    free(arr);
}
