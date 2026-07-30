#include <stdio.h>
#include<math.h>
/*void main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    int sum=0;
    for(;n>0;)
    {
        i=n%10;
        sum+=i;
        n/=10;
    }
printf("%d",sum);

}

*/
/*
void main()
{
    int n,c;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          c=0;
          break;
        }

     }3
     if(c==0)
    {
        printf("not a prime");

    }
    else
    {
        printf("prime");
    }
}

*/
/*
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int h=n,digits=0;
    for(;h>0;)
    {
        h/=10;
        digits++;
    }
    h=n;
    int sum=0,last;
  //  printf("No. of digits is %d",digits);
    for(int i=1;i<=digits;i++)
    {
        last=h%10;
        sum+=pow(last,digits);
        h/=10;
    }
    if(sum==n)
    {
        printf("it is armstrong");

    }
    else
    {
        printf("not a armstrong");
    }
}
*/
/*

void main()
{

    int n;
    printf("Enter  n:");
    scanf("%d",&n);
    int sum=0,j;
    for(int i=1;i<=n;i++)
    {
        j=pow(10,i)-1;

        sum+=j;
    }
    printf("sum is %d",sum);
}


*/
//print n square natural numbers
/*
void main()
{
    int n;
    printf("Enter  n:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {

        printf("%d^2 = %.0f\n",i,pow(i,2));
        sum+=pow(i,2);
    }
    printf("%d",sum);

}
*/


//armstroong in range

/*void main()
{
    int n1,n2;
    printf("Enter starting number:");
    scanf("%d",&n1);
    printf("Enter ending number:");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++){
    int h=i,digits=0;
    for(;h>0;)
    {
        h/=10;
        digits++;
    }
    h=i;
    int sum=0,last;
  //  printf("No. of digits is %d",digits);
    for(int i=1;i<=digits;i++)
    {
        last=h%10;
        sum+=pow(last,digits);
        h/=10;
    }
    if(sum==i)
    {
      //  printf("it is armstrong");
        printf("%d\n",i);

    }

}
}
*/

//prime in range
/*
void main()
{
     int n1,n2,count=0;
    printf("Enter starting number:");
    scanf("%d",&n1);
    printf("Enter ending number:");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++)
    {
        if(i==1||i==0)
            continue;
        count=0;
        for(int j=2;j<i;j++)
        {

            if(i%j==0)
                count=1;
        }
        if(count==0)
            printf("%d\n",i);
    }
}

*/
//fibonacci series
/*
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int first=0,second=1;
    for(int i=0;i<n;i++)
    {
        int l=first+second;
        printf("%d  ",l);
        first=second;
        second=l;
    }
}
*/
/*
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);
    int reverse=0,k=n,digits=-1;
    while(k>0)
    {
        ++digits;
        k/=10;
    }
    k=n;
    int i,j;
    printf("%d\n",digits);


    while(k>0)
    {

        i=k%10;
        reverse+=i*(int)pow(10,digits);
        digits--;
        k/=10;
    }
    printf("reverse is %d ",reverse);

}

*/
/*
void main()
{
    int base,power,sum=0;
    printf("Enter base");
    scanf("%d",&base);
    printf("Enter power");
    scanf("%d",&power);
    int first=0;
    while(first<=power)
    {
        sum+=(int)pow(base,first);
        first++;
    }
    printf("%d",sum);
}

*/

void main()
{
    float n,sum=0.0;
    scanf("%f",&n);
    for(int i=1;i<=n;i++)
       {

        printf("1/%d ",i);
        sum+=(float)(1/(float)i);
}
      printf("\n%.2f",sum);
}



