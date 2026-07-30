#include<stdio.h>
//array is palaindrome or not1
/*
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter array");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int a=0;
    for(int i=0;i<n/2+1;i++)
    {
        if(array[i]!=array[n-i-1])
        {
            a=1;
            break;
        }

    }
    if(a==1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}
*/
//remove duplicates
/*void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter array");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                for(int k=j;k<n-1;k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                j--;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    }
*/

//most frequent element
void main()
{

    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter array");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

        }
    }

}










