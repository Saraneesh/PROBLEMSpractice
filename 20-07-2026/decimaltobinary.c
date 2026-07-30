#include <stdio.h>
/*void main()
{

int n;
printf("Enter decimal values");
scanf("%d",&n);
int h=n,m;
unsigned long long k=0,l=1;
while(h>0)
{
    k+=l*(h%2);
    l*=10;
    h/=2;
}
printf("%llu",k);

}
*/
/*
void main()
{

int n;
printf("Enter decimal values");
scanf("%d",&n);
int h=n,m;
unsigned long long k=0,l=1;
while(h>0)
{
    k+=l*(h%8);
    l*=10;
    h/=8;
}
printf("%llu",k);

}
*/


void main()
{

int n;

printf("Enter decimal values");
scanf("%d",&n);
int a,b,h=n,i=-1,l;
char m;
while(h>0)
{
    l=h%16;
    h/=16;
    switch (l)
    {
case 10:
    m='A';
    break;
case 11:
    m='B';
    break;
case 12:
    m='C';
    break;
case 13:
    m='D';
    break;
case 14:
    m='E';
    break;
case 15:
    m='F';
    break;





    }
    ++i;
}
printf("%d%c",i,m);
}











