#include <stdio.h>
int binary_search(int arr[],int key,int left,int right);
int main()
{
    int n,m;
    printf("Enter size of array\n");
    printf("Row: ");
    scanf("%d",&m);
    printf("Column: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the array");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[j][i]);
    }
    }
    int top,bottom,right,left;
    top=0;
    bottom=m;
    right=n;
    left=0;
    for(int k=0;k<n*m;)
    {
        for(int i=left;i<right;i++)
        {
            printf("%d ",arr[top][i]);
            k++;
        }
        top++;

        for(int i=top;i<bottom;i++)
        {
            printf("%d ",arr[i][right-1]);
            k++;
        }
        right--;

        for(int i=right-1;i>left;i--)
        {
            printf("%d ",arr[bottom-1][i]);
            k++;
        }
        bottom--;
        for(int i=bottom;i>=top;i--)
        {
            printf("%d ",arr[i][left]);
            k++;
        }
        left++;
    }


}
