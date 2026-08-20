#include <stdio.h>
int binary_search(int arr[],int key,int left,int right);
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key");
    int key,h;
    scanf("%d",&key);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j]N)
        {
            h=arr[j];
            arr[j]=arr[i];
            arr[i]=h;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
     int p=binary_search(arr,key,0,n-1);
printf("\n the index is %d",p);

}
int binary_search(int arr[],int key,int left,int right)
{

    int mid=(left+right)/2;
    if(left>right)
    {
        return -1;
    }
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
       return binary_search(arr,key,mid+1,right);
    }
    else
    {
     return   binary_search(arr,key,left,mid-1);
    }

}






