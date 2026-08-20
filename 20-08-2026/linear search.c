#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key");
    int key,i=0,h=0;
    scanf("%d",&key);

    while(1)
    {
        if(arr[i]==key)
        {


            printf("the index is %d",i+1);
break;
        }
        i++;
        if(i==n&&h==0)
        {
            printf("Not found");
            break;
        }
    }
}
