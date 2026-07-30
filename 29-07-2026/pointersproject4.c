#include<stdio.h>
void duplicate(int *a,int *m);
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
    duplicate(arr,&n);
    int p=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",p);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}

}
void duplicate(int *p,int *m)
{
    int n=*m;
    int a=n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i!=j)
            {
            if(*(p+i)==*(p+j))
            {
                for(int k=j;k<*m;k++)
                {
                    *(p+k)=*(p+k+1);

                }
                (*m)--;
            }
        }
    }
}}
