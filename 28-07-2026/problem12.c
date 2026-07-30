#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of pairs");
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++)
    {

            scanf("%d%d",&arr[i][0],&arr[i][1]);

    }
    int arrr[n];
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
             if(arr[i][0]==arr[j][1] && arr[i][1]==arr[j][0])
             {

                 printf("%d %d \n",arr[i][0],arr[i][1]);
                 break;
             }
         }
    }

}
