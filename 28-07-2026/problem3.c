#include<stdio.h>
int main()
{
    char str1[100],str2[100],a=0,b=0;
    printf("Enter str1");
    scanf("%s",&str1);
    printf("Enter str2");
    scanf("%s",&str2);
    for(int i=0; i<100; i++)
    {
        if(str1[i]=='\0')
            break;
        for(int j=0; j<100; j++)
        {
            b=0;
            for(int k=0; k<j; k++)
            {
                if(str2[j]==str2[k])
                {
                    b=1;
                }
            }
            if(b==0){
            if(str2[j]!='\0')
            {
                if(str1[i]==str2[j])
                    a++;
            }}
        }
    }
    printf("%d",a);


}
