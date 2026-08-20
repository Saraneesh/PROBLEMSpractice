#include<stdio.h>
int main()
{
    /*
     n= Total no of Monkeys
    k= Number of eatable Bananas by Single Monkey (Monkey that jumped down last may get less than k Bananas)
    j = Number of eatable Peanuts by single Monkey(Monkey that jumped down last may get less than j Peanuts)
    m = Total number of Bananas
    p  = Total number of Peanuts
*/
    int n,k,j,m,p;
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&j);
    scanf("%d",&m);
    scanf("%d",&p);
    int a=n;
    while(1)
    {
        if(n==0&&(m>=k||p>=j))
            {
                n=a;

            }

          else  if(m>=k)
            {
                n--;
                m-=k;

            }
            else if(p>=j)
            {
                n--;
                p-=j;
            }
            else if(n==1&&m<k&&((m+p>k)||(m+p>j)))
            {
                p-=k-m;
                m=0;
                n--;
            }


            if(m<k&&p<j)
            {
                   printf("No of monkeys left %d",n);
                   return 0;
            }



    }


}
