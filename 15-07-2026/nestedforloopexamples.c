#include<stdio.h>
/*
void main()
{
    int n;
    scanf("%d",&1n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}
*/
/*void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

}
*/
/*
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
*/
/*
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
      for(int j=n-i;j>1;j--)
        printf(" ");

        for(int k=1;k<=i;k++)
        {
            printf("%d",k);

        }
        printf("\n");
    }
}
*/
/*
void main()
{
    int n,h;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(int j=n-i+1;j>1;j--)
        printf(" ");

        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
            h=k;

        }
        for(int l=h-1;l>0;l--){
            printf("%d",l);}
        printf("\n");
    }
}

*/
/*
#include <stdio.h>

int main() {
    int n = 5; // Total number of rows for the diamond

    for (int i = 1; i <= n; i++) {
        // Upper half of the diamond (including the center row)
        if (i <= (n / 2) + 1) {
            // Decreasing spaces
            for (int j = i; j <= n / 2; j++) {
                printf(" ");
            }
            // Increasing stars
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        // Lower half of the diamond
        else {
            // Increasing spaces
            for (int k = 1; k <= i - (n / 2) - 1; k++) {
                printf(" ");
            }
            // Decreasing stars
            for (int y = i; y <= n; y++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
*//*

void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(int j=1;j<=n;j++)
                printf("* ");
                printf("\n");
        }
        else
        {
         printf("* ");
         for(int h=2;h<n;h++)
            printf("  ");
         printf("* ");
         printf("\n");
        }
    }

}
*/
/*
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);

        for(int k=n-1;k>=i;k--)
            printf(" ");

        for(int k=n-2;k>=i;k--)
            printf(" ");
        for(int k=i;k>=1;k--)
        {
          if(k==n)
                continue;

            printf("%d",k);

        }
        printf("\n");
    }
}*/
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces to slide the triangle right
        for (int j = n; j > i; j--) {
            printf(" ");
        }

        // 2. Print the first star of the row
        printf("*");

        // 3. Print hollow spaces inside the triangle
        if (i > 1) {
            // Inner gap grows by 2 spaces for each subsequent row
            for (int l = 1; l <= (2 * i - 3); l++) {
                printf(" ");
            }
            // Print the closing star of the row
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

*/

/*
void main()
{
    int n,l=1;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
          {

           if(j%2==0)
                l=0;
            else
                l=1;
            printf("%d",l);
          }
        for(int a=n-i+1;a>0;a-=2)
           {

           /*  if(a==n)
             {
                 continue;
             }*/
       /*  printf(" ");}

     for(int b=1;b<=i;b++)
          {
           if(b==n){
            continue;
           }
           if(b%2==0)
                l=1;
            else
                l=0;
            printf("%d",l);
          }
          printf("\n");

    }

}
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");

        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
            printf(" ");
        for(int k=n-i;k>=1;k--)
            printf("* ");
        printf("\n");
    }
}











