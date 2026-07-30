#include<stdio.h>
void func(int *a,int n);
void swap(int *a,int *b);
int main()
{
    int n;
    printf("N = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    func(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

}
void func(int *p,int n)
{
    int a=0,b=n-1;
   while(a<b)
   {
       while(*(p+a)>0 && a<n)
       {

             a++;

       }
       while(*(p+b)<0 && b>0)
       {

             b--;

       }
       if(a<b)
       {
           swap((p+a),(p+b));
       }
   }


}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}










