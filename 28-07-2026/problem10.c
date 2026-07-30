

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
    int d,b;
    printf("D = ");
    scanf("%d",&d);
    for(int a=0;a<d;a++)
    {
        b=arr[n-1];
        for(int i=n-1;i>0;i--)
        {



                arr[i]=arr[i-1];


        }
            arr[0]=b;

    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
