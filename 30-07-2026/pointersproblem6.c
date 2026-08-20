#include<stdio.h>
int longest_sub(int *,int);
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
    int size=longest_sub(arr,n);
    printf("%d",size);
}

int longest_sub(int *p,int n)
{
    int a=0,b=0;

    for(int i=1;i<n;i++)
    {
        if(*(p+i-1)<*(p+i))
        {
            a++;

        }
        else{
            b=a;
            a=0;}
        if(a>b)
        {
            b=a;
        }
    }
    return b+1;
}










