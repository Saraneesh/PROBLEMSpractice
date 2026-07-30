#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    int a=n,sum=0,b;
    while(a>0)
    {
        b=a%10;
        sum+=b;
        a=a/10;
    }
    if(n%sum==0)
    {
        printf("Good");
    }
    else
        printf("Bad");
}
