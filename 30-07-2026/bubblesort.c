#include<stdio.h>
void bubblesort(int arr[],int n);


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
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void bubblesort(int arr[],int n)
{

    int a,b;
    while(1)
    {
        a=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<=arr[i])
            {
                continue;
            }
            else
            {
                a=1;
                b=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=b;
            }
        }
        if(a==0)
            break;

    }
}
