#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("data.txt","w");
    char arr[10];
    scanf("%s",arr);
    fprintf(fp,"%s",arr);
    fclose(fp);
    fp=fopen("data.txt","r");
    fscanf(fp,"%s",arr);
    printf("%s",arr);
    fclose(fp);

}
