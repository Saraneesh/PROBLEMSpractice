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
    int min,index;
    for(int i=0;i<n;i++)
    {
        min=arr[i];
        index=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                index=j;

            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
