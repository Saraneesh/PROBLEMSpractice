#include<stdio.h>
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
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;j<n-1;j++)
            {
              arr[j]=arr[j+1];
            }
            arr[n-1]=0;

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }


}
