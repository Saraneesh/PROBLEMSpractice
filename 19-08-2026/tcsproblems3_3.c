#include <stdio.h>

int main()
{
    char parent[50];
    char children[100];
    char choice;
    int i, j, count, childCount;

    scanf("%s", parent);
    scanf(" %c", &choice);

    if (choice == 'Y')
    {
        scanf(" %[^\n]", children);

        childCount = 1;

        /* Count children */
        for (i = 0; children[i] != '\0'; i++)
        {
            if (children[i] == ',')
            {
                childCount++;
            }
        }

        count = childCount + 1;

        printf("TOTAL MEMBERS:%d\n", count);
        printf("COMISSION DETAILS\n");

        printf("%s: %d INR\n", parent, childCount * 500);

        /* Print child names */
        j = 0;

        for (i = 0; ; i++)
        {
            if (children[i] == ',' || children[i] == '\0')
            {
                children[i] = '\0';

                printf("%s: 250 INR\n", &children[j]);

                j = i + 1;
            }

            if (children[i] == '\0')
            {
                break;
            }
        }
    }
    else
    {
        printf("TOTAL MEMBERS:1\n");
        printf("COMISSION DETAILS\n");
        printf("%s: 250 INR\n", parent);
    }

    return 0;
}
