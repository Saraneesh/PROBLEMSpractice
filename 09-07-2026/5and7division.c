#include<stdio.h>
void main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("+ve \n");

    }
    else{
        printf("-ve \n");
    }

    if((a>99&&a<1000)||(a<-99&&a>-1000))
    {
        printf("yes 3 digit number \n");

    }
    else{
        printf("no nott 3 digit ]\n");
    }
    if(a%11==0&&a%32==0)
    {
        printf("divide by 11 and 32");

    }
    else
    {
        printf("not divide by 11 and 32");
    }
}
