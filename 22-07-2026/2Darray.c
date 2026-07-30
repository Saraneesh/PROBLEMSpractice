//getinput and print
#include<stdio.h>
/*
void main()
{
    int m,n;
    printf("Enter the size of the array:");
    printf("No. of rows:");
    scanf("%d",&m);
    printf("Enter the no.of columns");
    scanf("%d",&n);
    int array[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the [%d][%d]",i,j);
            scanf("%d",&array[i][j]);        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",array[i][j]);

        }
        printf("\n");

    }
}
*/

//matrix addition
/*
int main()
{
     int m,n;
    printf("Enter the size of the matrix 1:\n");
    printf("No. of rows:");
    scanf("%d",&m);
    printf("Enter the no.of columns");
    scanf("%d",&n);
    int array1[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the [%d][%d]",i,j);
            scanf("%d",&array1[i][j]);        }
    }
     int a,b;
    printf("Enter the size of the matrix 2 \n:");
    printf("No. of rows:");
    scanf("%d",&a);
    printf("Enter the no.of columns");
    scanf("%d",&b);
    int array2[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter the [%d][%d]",i,j);
            scanf("%d",&array2[i][j]);        }
    }

    if(a==m&&b==n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                array1[i][j]=array1[i][j]+array2[i][j];

            }
        }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",array1[i][j]);

        }
        printf("\n");
    }



    }
    else
    {
        printf("rows and columns are not equal for both matrix so addition not possible\n\n\n\n");
    }
return 0;
}
*/
//transpose of a matrix
/*
void main()
{
    int m,n;
    printf("Enter the size of the array:");
    printf("No. of rows:");
    scanf("%d",&m);
    printf("Enter the no.of columns");
    scanf("%d",&n);
    int array[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the [%d][%d]",i,j);
            scanf("%d",&array[i][j]);        }
    }

    int transmatrix[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transmatrix[j][i]=array[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d  ",transmatrix[i][j]);

        }
        printf("\n");}}
*/

int main(){
 int m,n;
    printf("Enter the size of the matrix 1:\n");
    printf("No. of rows:");
    scanf("%d",&m);
    printf("Enter the no.of columns");
    scanf("%d",&n);
    int array1[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the [%d][%d]",i,j);
            scanf("%d",&array1[i][j]);        }
    }
     int a,b;
    printf("Enter the size of the matrix 2 \n:");
    printf("No. of rows:");
    scanf("%d",&a);
    printf("Enter the no.of columns");
    scanf("%d",&b);
    int array2[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter the [%d][%d]",i,j);
            scanf("%d",&array2[i][j]);        }
    }

    int c[m][b];
    if(n==a)
    {

        for(int i=0;i<m;i++)
        {

            for(int j=0;j<b;j++)
            {
                c[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    c[i][j]+=array1[i][k]*array2[k][j];
                }
            }
        }
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d  ",c[i][j]);

        }
        printf("\n");}
    }





