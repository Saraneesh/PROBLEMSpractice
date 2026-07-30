#include<stdio.h>
/*
void add();
void main()
{
    add();
}
void add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
}
*/
/*
void add(int a,int b)
{
    printf("%d",a+b);
}
void main()
{
    add(10,20);
}
*/
int add(int a,int b)
{
    return a+b;
}
void main()
{
int a,b;
    scanf("%d %d",&a,&b);
    int z=add(a,b);
    printf("%d",z);
}
