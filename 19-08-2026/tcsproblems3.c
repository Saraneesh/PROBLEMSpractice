#include <stdio.h>

int main()
{
    char stops[8][3] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    int path[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};

    char source[3], destination[3];
    int s = -1, d = -1;
    int i, distance = 0;
    float fare;

    scanf("%s", source);
    scanf("%s", destination);

    /* Convert source to uppercase */
    for(i = 0; source[i] != '\0'; i++)
    {
        if(source[i] >= 'a' && source[i] <= 'z')
            source[i] = source[i] - 32;
    }

    /* Convert destination to uppercase */
    for(i = 0; destination[i] != '\0'; i++)
    {
        if(destination[i] >= 'a' && destination[i] <= 'z')
            destination[i] = destination[i] - 32;
    }
   for(i = 0; i < 8; i++)
    {
        if(stops[i][0] == source[0] &&
           stops[i][1] == source[1])
        {
            s = i;
        }

        if(stops[i][0] == destination[0] &&
           stops[i][1] == destination[1])
        {
            d = i;
        }
    }

    /* Invalid input */
    if(s == -1 || d == -1 || s == d)
    {
        printf("INVALID OUTPUT");
        return 0;
    }

    i = s;

    while(i != d)
    {
        distance = distance + path[i];

        i++;

        if(i == 8)
            i = 0;
    }


    fare = distance * 5.0 / 1000;


    if(fare != (int)fare)
        fare = (int)fare + 1;

    printf("%.1f INR", fare);

    return 0;
}
