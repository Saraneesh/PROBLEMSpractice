#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int fact=0,temp=n,h;
    for(int i=n;i>1;i--)
    {
        fact=0;
        h=i-1;
        while(h>0)
        {
            fact+=temp;
            h--;
        }
        temp=fact;
    }
    printf("%d",fact);
}
