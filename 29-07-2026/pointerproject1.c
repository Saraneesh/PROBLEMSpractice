#include<stdio.h>
void left_rotate(int *p,int n);
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
    int k;
    printf("K = ");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
    left_rotate(arr,n);
    }
    for(int i=0;i<n;i++)
    {
       printf("%d  ",arr[i]);
    }
}
void left_rotate(int *p,int n)
{
    int i,a=*p;
    for( i=0;i<n-1;i++)
    {
        *(p+i)=*(p+i+1);
    }
    *(p+i)=a;
}













