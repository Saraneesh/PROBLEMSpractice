#include<stdio.h>
/*void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    array[0]=0;
    array[1]=1;

    for(int i=2;i<n;i++)
    {
        array[i]=array[i-1]+array[i-2];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
}
*/
/*

void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter aray");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int small=array[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

                if(array[i]>array[j])
                {
                    int h=array[i];
                    array[i]=array[j];
                    array[j]=h;
                }

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",array[i]);
    }

}
*/


/*
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter aray");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int small=array[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

                if(array[i]<array[j])
                {
                    int h=array[i];
                    array[i]=array[j];
                    array[j]=h;
                }

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",array[i]);
    }

}
*/
/*
void main()
{

    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter aray");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int a=array[0],b=array[0];

    for(int i=0;i<n;i++)
    {
       if(a>array[i])
      {

        a=array[i];
        b=a;
    }}
    printf("%d",a);
}

*/

// reverse a array
/*
void main()
{
     int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter aray");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     for(int i=n-1;i>=0;i--)
    {
        printf("%d  ",array[i]);
    }


}
*//*
void main()
{
     int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter aray");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int k[n],h=0;
    //for(int i=0;i<n;i)
    for(int i =0;i<n;i++)
    {


        int is_checked=0;
        for(int j=i+1;j<n;j++)
        {
            if(array[i]==array[j]&& is_checked==0)
            {
                int a=0;
                for(int l=0;l<h;l++)
                {
                    if(k[l]==array[i])
                        a=1;
                }
                if(a==0)
                {


                printf("%d  ",array[i]);
                k[h]=array[i];
                h++;

                }
                 is_checked=1;
            }

        }


    }
}


*/
//merge 2 sorted array
/*
void main()
{
    int n1;
    printf("enter size of array 1:");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int n2;
    printf("enter size of array 2:");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int n3=n1+n2;
    int arr3[n3];
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }
    int h;
    for(int i=0;i<n3;i++)
    {
        for(int j=i+1;j<n3;j++)
        {
            if(arr3[i]>arr3[j])
            {
                h=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=h;
            }
        }
    }
    for(int i=0;i<n3;i++)
        printf("%d ",arr3[i]);
}
*/
/*
 void main()
{
     int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter aray");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
 int h=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[i]==array[j])
            {

                h++;
            }
 }

        if(h==1)
            printf("%d",array[i]);
        }
}
*/

// frequency of the array
/*
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter array");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int p[n],l=0;
    for(int i=0;i<n;i++)
        p[i]=0;
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=0;j<n;j++)
        {
            if(array[i]==array[j])
                {
                    k++;
                }



        }
        int a=0;
        for(int m=0;m<l;m++)
        {

        if(array[i]==p[m])
            a=1;
        }
        if(a==0){
        printf("%d   -    %d \n",array[i],k);
        p[l]=array[i];
        l++;}
    }
}
*/

//insert element in srted array
/*
void main()
{
  int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n+1];
    printf("Enter array");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
      int small=array[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

                if(array[i]>array[j])
                {
                    int h=array[i];
                    array[i]=array[j];
                    array[j]=h;
                }

        }
    }
  printf("Enter element to sort");
  int p;
  scanf("%d",&p);
  for(int i=0;i<=n;i++)
  {
      if(array[i]>=p)
      {
          for(int a=n;a>=i;a--)
          {
              array[a]=array[a-1];
          }
          array[i]=p;
          break;
      }


  }
for(int i=0;i<n+1;i++)
    {
        printf("%d  ",array[i]);
    }

}
*/
/*
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int array[n];
    printf("Enter array");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to delete ");
    int del;
    scanf("%d",&del);
    for(int i=0;i<n;i++)
    {
        if(array[i]==del)
        {
            for(int j=i;j<n-1;j++)
            {
                array[j]=array[j+1];
            }
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d",array[i]);
    }
}

*/






