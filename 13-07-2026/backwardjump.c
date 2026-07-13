#include<stdio.h>
void main()
{
    int i=1;
    print:
        printf("%d",i);
        i++;
    if(i<=10){
        goto print;
        printf("hell");
    }
}
