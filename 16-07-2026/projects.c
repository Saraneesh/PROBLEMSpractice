#include<stdio.h>
/*
A
B B
C C C
D D D D
*/
/*
void main()
{
    int i=65;
    int n;
    printf("Enter n;");
    scanf("%d",&n);
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<=a;b++)
            {printf("%c ",i);

            }
            i++;
            printf("\n");
    }
}
*/
/*
           1
         2 3 2
       3 4 5 4 3
    4 5 6 7 6 5 4
   5 6 7 8 9 8 7 6 5
*/
/*
void main()
{
    int n,a;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(int j=n-i;j>0;j-=1)
          printf(" ");
      a=i;
      for(int k=0;k<i;k++)
      {
          printf("%d",a);
          a++;
       }
      a-=2;
          for(int k=i-1;k>0;k--)
         {
          printf("%d",a);
          a--;
         }
       printf("\n");
    }
}


*/
/*
1
23
456
78910


*/
/*
void main()
{
   int n,a=1;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            {printf("%d",a);
             a++;
            }
            printf("\n");
    }
}
*/
/*
void main()
{
    int h=10,l,a=0,b=0,n;
    printf("Enter n:");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
         l=i%5;
         switch(l)
         {
         case 1:
            a+=h;

            break;
         case 2:
            b+=h;

            break;
         case 3:
            a-=h;

            break;
         case 4:
            b-=h;

            break;
         case 0:
            a+=h;
            break;

    }
            h+=10;
}
printf("%d , %d",a,b);
}
*/


/*
void main()
{
    int n1,n2,digit=0;
    printf("Enter first");
    scanf("%d",&n1);
    printf("Enter second");
    scanf("%d",&n2);
    int h=n2;
    int l=0;
    while(h>0)
    {
        digit++;
        h/=10;
    }
    int a;
    for(int i=n1;i<=n2;i++)
    {
     a=i;
     int b=0;
    while(a>0)
    {
        b++;
        a/=10;
    }

       if(b<digit)
       {


        for(int j=1;j<=digit-b;j++)
        {
            printf("0");

        }
        printf("%d ",i);
       }
    else {

    printf("%d ",i);

    }

    }
}


*/
/*
void main()
{
    int n,len,mint=0;
    scanf("%d %d",&n,&len);

    if(len==2)
    {
        mint=n-1;

    }
    else{
            mint=n-1;
    for(int i=2;i<len;i++)
    {

        mint=(mint*2);
    }
    }printf("%d",mint*2+1);
}
*/


int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a=0,b=0,c=7,j=8,k=1;
    for(int i=4;i<=n;)
    {


        if(j<=n)
        {
            c-=k;
            k++;
        }
        i++;
         if(i<=n)
        {
            c+=j;
            j++;

        }
        i++;
    }
    printf("the %d th term is %d",n,c);
return 0;
 }








