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
    int a;
    for(int i=0;i<n;i++)
    {
        a=0;
       for(int j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               if(i==j)
               {
                   continue;
               }
               a=1;
           }
       }
       if(a==0)
       {
           printf("%d",arr[i]);
           break;
       }
    }


}
