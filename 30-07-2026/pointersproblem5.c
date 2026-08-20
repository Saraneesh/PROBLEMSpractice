#include<stdio.h>
int missing_nubmer(int *,int);
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
    int mis_no=missing_nubmer(arr,n);
    printf("%d",mis_no);
    return 0;
}
int missing_nubmer(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        int a=0;
        for(int j=0;j<n;j++)
        {
        if(*(p+j)==(i+1))
        {

            a=1;
            break;

        }
       }
       if(a==0)
       {
           return i+1;
       }
    }
}
