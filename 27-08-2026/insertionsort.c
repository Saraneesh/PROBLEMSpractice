#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key,index;

    for(int i=1;i<n;i++)
    {
        key=arr[i];
        index=i;
    for(int j=i;j>=0;j--)
    {
        if(arr[j]>key)
        {

            for(int w=index;w>j;w--)
                arr[w]=arr[w-1];
            index=j;
            arr[j]=key;
        }
    }
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
