#include<stdio.h>
int main()
{
    char arr[100];
    int i=0;
    while(i<100){
       arr[i]=getchar();
       if(arr[i]=='\n')
         break;
i++;
}
FILE *fp;
fp=fopen("data.txt","w");
int j=0;
fprintf(fp,"%s",arr);
fclose(fp);
fp=fopen("data.txt","r");
char ch;
int n=0;

printf("%s",fgets(fp));
}
