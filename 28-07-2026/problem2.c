#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter m and n :");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

            scanf("%d",&arr[i][j]);
        }
    }
    int a=0,b=0,c=-1;
    for(int i=0;i<m;i++)
    {
        a=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                a++;
            }
        }
        if(a>b)
        {
            b=a;
            c=i+1;

        }
    }
    printf("%d",c);
}
