#include <stdio.h>
#include<math.h>
/*int main()
{
double i=1,sum=1,n;
printf("enter n");
scanf("%d",&n);

sum:
    sum*=i;
    i++;
if(i<=n)
{
    goto sum;
}
printf("sum  %d",sum);

}
*/

/*int main()
{
int i=1,sum=1,n;
printf("enter n");
scanf("%d",&n);

sum:
    printf("%d * %d = %d\n",i,n,i*n);
    i++;

if(i<=10)
{
    goto sum;
}


}
*/
/*int main()
{
    int n,sum=0,i=1,h=1;
    printf("enter n");
    scanf("%d",&n);
    print:
        sum=sum+i;
        i+=2;
        h++;
    if(h<=n)
    {
        goto print;
    }
    printf("sum of %d odd numbers is %d",n,sum);
}


*/
/*int main()
{
    int n,sum=0,i=2,h=1;
    printf("enter n");
    scanf("%d",&n);
    print:
        sum=sum+i;
        i+=2;
        h++;
    if(h<=n)
    {
        goto print;
    }
    printf("sum of %d odd numbers is %d",n,sum);
}


*/

int main()
{
    int n,i=1;
    printf("enter n :");
    scanf("%d",&n);
    print:
        printf("%d^%d = %.0f \n",n,i,pow(n,i));
        i++;
    if(i<=n)
    {
        goto print;
    }
}






