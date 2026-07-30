#include<stdio.h>
void db(int n);

void main()
{
    int n;
    printf("Enter decimal:");
    scanf("%d",&n);
db(n);
}

void db(int n)
{
    long long  b=1;
    long long result=0;
    while (n>0)
    {
        result+=(n%2)*b;
        n=n/2;
        if(n>0){
        b*=10;
        }
    }
    printf("%d",result);
}
