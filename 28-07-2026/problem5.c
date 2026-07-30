#include<stdio.h>
int main()
{
    int n;
    printf("Enter T");
    scanf("%d",&n);
    int v[n],w[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&v[i],&w[i]);
    }
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        a=v[i],b=w[i];
        if(w>=(a*2)&&w<=(a*4))
        {
            for(int j=1;j<=a;j++)
            {

                if()
            }
        }
        else
            printf("-1");
    }
}
