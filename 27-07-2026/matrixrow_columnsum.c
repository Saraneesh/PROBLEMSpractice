#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter row");
    scanf("%d",&m);
    printf("Enter column");
    scanf("%d",&n);
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }

    }

    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=matrix[i][j];
        }
        printf("Sum of row %d is ",i+1);
        printf("%d\n",sum);
        sum=0;
    }
    sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=matrix[j][i];
        }
        printf("Sum of column %d is ",i+1);
        printf("%d\n",sum);
        sum=0;
    }
}
