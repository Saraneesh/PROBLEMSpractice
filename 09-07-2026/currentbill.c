#include<stdio.h>
void main()
{
    int a;
    printf("enter the units");
    scanf("%d",&a);
    if(a<=200)
    {
        printf("the current bill is %d",a*3);
    }
    else if((a>200)&&(a<=500))
    {
        printf("the current bill %d",a*4);
    }
    else if((a>500)&&(a<=1000))
    {
        printf("the current bill is %d",a*8);

    }
    else
    {
        printf("the currrent bill is %d",a*10);
    }
}
