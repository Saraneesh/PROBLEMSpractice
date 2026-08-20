#include <stdio.h>

int main()
{
    char input[10];
    int age;
    int count = 0;
    int total = 0;

    while(count < 20)
    {
        fgets(input, 10, stdin);

        if(input[0] == '\n')
        {
            break;
        }

        sscanf(input, "%d", &age);

        if(age <= 0 || age > 120)
        {
            printf("INVALID INPUT");
            return 0;
        }

        if(age < 17)
        {
            total = total + 200;
        }
        else if(age <= 40)
        {
            total = total + 400;
        }
        else
        {
            total = total + 300;
        }

        count++;
    }

    printf("Total Income %d INR", total);

    return 0;
}
