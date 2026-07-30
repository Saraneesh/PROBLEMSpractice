#include<stdio.h>
void main()
{
    int  a[]={1,24,3,74};
    int n=4;
        printf("%p ",a);
        for(int i=0;i<n;i++)
        {
            printf("%d    ",*(a+i));
        }
    int *ptr;
    ptr=a;
    printf("%d",*ptr);
    ptr++;
        printf("%d",*ptr);

}
