#include <stdio.h>
void series(int n);
int fact(int i);
int main()
{
    printf("N = ");
    int n;
    scanf("%d",&n);
    series(n);
}
void series(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(fact(i)/i);
    }
    printf("sum %d",sum);
}
int fact(int i)
{
    if(i==1)
        return 1;
    else
        return i*fact(i-1);
}

