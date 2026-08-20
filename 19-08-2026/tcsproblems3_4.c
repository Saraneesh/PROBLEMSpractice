#include <stdio.h>

int main()
{
    char c;
    int n;

    scanf("%c", &c);
    scanf("%d", &n);

    switch(c)
    {
        case 'C':
        case 'c':
            switch(n)
            {
                case 1:
                    printf("Welcome to CCD!\nEnjoy your Espresso Coffee!");
                    break;

                case 2:
                    printf("Welcome to CCD!\nEnjoy your Cappuccino Coffee!");
                    break;

                case 3:
                    printf("Welcome to CCD!\nEnjoy your Latte Coffee!");
                    break;

                default:
                    printf("INVALID INPUT");
            }
            break;

        case 'T':
        case 't':
            switch(n)
            {
                case 1:
                    printf("Welcome to CCD!\nEnjoy your Plain Tea!");
                    break;

                case 2:
                    printf("Welcome to CCD!\nEnjoy your Assam Tea!");
                    break;

                case 3:
                    printf("Welcome to CCD!\nEnjoy your Ginger Tea!");
                    break;

                case 4:
                    printf("Welcome to CCD!\nEnjoy your Cardamom Tea!");
                    break;

                case 5:
                    printf("Welcome to CCD!\nEnjoy your Masala Tea!");
                    break;

                case 6:
                    printf("Welcome to CCD!\nEnjoy your Lemon Tea!");
                    break;

                case 7:
                    printf("Welcome to CCD!\nEnjoy your Green Tea!");
                    break;

                case 8:
                    printf("Welcome to CCD!\nEnjoy your Organic Darjeeling Tea!");
                    break;

                default:
                    printf("INVALID INPUT");
            }
            break;

        default:
            printf("INVALID INPUT");
    }

    return 0;
}
