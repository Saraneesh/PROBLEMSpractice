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
   for(int i=0;i<n-1;i++)
   {
       for(int j=n-1;j>i;j--)
       {
           matrix[i][j]=0;
       }
   }
   for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");

    }

}
