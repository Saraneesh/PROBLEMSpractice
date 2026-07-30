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
    int left_sum=0,p=0,right_sum=0;
for(int i=0;i<n;i++)
{
    left_sum=0;right_sum=0;

    for(int j=0;j<i;j++)
    {
        left_sum+=arr[j];
    }
    for(int k=i+1;k<n;k++)
    {
        right_sum+=arr[k];

    }
    if(left_sum==right_sum)
    {

        printf("%d",i);
        p=1;
        break;
    }
}
if(p==0)
{
    printf("No equilibrium found");
}


}
