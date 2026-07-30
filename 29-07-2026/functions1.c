#include<stdio.h>
void swap(int *a,int *b)
{


   int temp=*a;
    *a=*b;
    *b=temp;
    // *a=10
    //&a =address of a inside function



}
void main()
{
    int a=10,b=11;
    swap(&a,&b);
    printf("%d %d",a,b);
}
