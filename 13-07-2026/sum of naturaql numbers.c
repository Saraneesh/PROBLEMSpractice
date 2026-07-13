#include <stdio.h>
void main()
{
int i=1,sum=0,n;
printf("enter n");
scanf("%d",&n);

sum:
    sum+=i;
    i++;
if(i<=n)
{
    goto sum;
}
printf("sum  %d",sum);

}
