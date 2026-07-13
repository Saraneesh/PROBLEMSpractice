#include <stdio.h>
void main()
{

int a,b,c,result;
printf("Enter the number a");
scanf("%d",&a);
printf("Enter the number b");
scanf("%d",&b);
printf("Enter the number c");
scanf("%d",&c);
//a>b?(true):false
result=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("the greatest number is %d",result);

}
