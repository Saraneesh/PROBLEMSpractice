
#include<stdio.h>
void insertsort(int arr[],int n);


int main()
{
    int n;
    printf("N = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertsort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void insertsort(int arr[],int n)
{
    int a,b;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            b=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=b;
            insertsort(arr,i);
        }

    }
}
