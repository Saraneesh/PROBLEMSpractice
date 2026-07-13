
#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter n");
    scanf("%d",&n);
    print:
        printf("%d \n",i);
        i++;
        i++;
    if(i<=n){
        goto print;
        printf("hell");
    }
}
