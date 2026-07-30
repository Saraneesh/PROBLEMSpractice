#include<stdio.h>
#include<math.h>
/*
int main()
{
    int n;
   printf("Enter n:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter array   ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   int count=1,x;
    for(int i=1;i<n;i++)
    {
        x=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
                x=1;
                break;
        }
        if(x==0)
            count++;
    }
    printf("\nCount is %d",count);
}
*//*

int main()
{
    int n;
   printf("Enter Time:");
   scanf("%d",&n);
   int entry[n];
   printf("Enter entry ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&entry[i]);
   }


   int exit[n];
   printf("Enter exit   ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&exit[i]);
   }
   int a1=0,a2=0;
   for(int i=0;i<n;i++)
   {
       a1=a1+entry[i]-exit[i];
       if(a1>a2)
       {
           a2=a1;
       }
   }
   printf("%d",a2);

}
*//*
int main()
{
    int n;
    printf("Enter the size :");
    scanf("%d",&n);
    char arr[n];
    printf("Enter the color");
    for(int i=0;i<n;i++)
    {
        scanf("  %c",&arr[i]);
    }
    int count,m=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count%2==1)
        {
            m=1;
            printf("%c",arr[i]);
            break;
        }


    }
    if(m==0)
    {
        printf("Nothing found");
    }


}

*//*

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    int k;
    printf("Enter K: ");
    scanf("%d",&k);
    int need,w=n;
    while(1){
    printf("Enter need");
    scanf("%d",&need);
    if(need>w)
    {
        printf("Enter valid input");
        continue;
    }
    else
    {
        w-=need;

        printf("Number of candies left %d\n",w);
        printf("Number of candies sold %d\n",need);
         if(w<=k)
        {
            w=n;
        }
    }

    }
}
*/
/*
int main()
{
    int data[9];
    printf("Enter data :");
    for(int i=0;i<9;i++)
    {
        scanf("%d",&data[i]);
        if(data[i]>100 || data[i]<0)
        {
            printf("Invalid input");
            return 0;
        }
    }
    int a=0,b=0,c=0;
    for(int i=0;i<9;i++)
    {
        if(i%3==0)
        {
            a+=data[i];

        }
        else if(i%3==1)
        {
            b+=data[i];
        }
        else{c+=data[i];}
    }
    a=round((float)a/3);
    b=round((float)b/3);
    c=round((float)c/3);
    if(a<70 && b<70 && c<70)
    {
        printf("All are unfit");
        return 0;
    }
    int max_avg = a;
    if(b > max_avg) max_avg = b;
    if(c > max_avg) max_avg = c;

    if(a == max_avg) {
        printf("Trainee Number : 1\n");
    }
    if(b == max_avg) {
        printf("Trainee Number : 2\n");
    }
    if(c == max_avg) {
        printf("Trainee Number : 3\n");
    }
}
*/
int main()
{
    int n;
    printf("Enter input weight\n");
    scanf("%d",&n);
    if(n>0 && n<=2000)
    {
        printf("Estimated time 25m");
    }
    else if(n>2000 && n<4001)
    {
        printf("Estimated time is 35m");
    }
    else if(n>4000 && n<7000)
    {
        printf("Estimated time 45m");
    }
    else if(n>7000)
    {
        printf("Overloaded");
    }
    else
    {
        printf("Invalid input");
    }
}














