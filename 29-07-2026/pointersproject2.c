#include<stdio.h>
void left_rotate(int *p,int n);
int main()
{
    int n,o=0;
    printf("N = ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int f;

    for(int i=0;i<n;i++)
    {
    f=1;
    for(int j=0;j<n;j++)
    {
      if(arr1[j]!=arr2[j])
      {
          f=0;
          break;
      }
    }
        left_rotate(arr1,n);

    if(f==1)
    {
        printf("It is circular");
        o=1;
    break;

    }

}
if(o==0)
{
    printf("Not circular");
}
}
void left_rotate(int *p,int n)
{
    int i,a=*p;
    for(i=0;i<n-1;i++)
    {
        *(p+i)=*(p+i+1);
    }
    *(p+i)=a;
}




