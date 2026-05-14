/*
India -> Delhi ,Maharashtra , Gujarat
US    -> Las Vegas , New Jersey , California
*/

#include <stdio.h>

int main()
{
    int country;
    int state;

    printf("1. India\n2. USA\nSelect your country : ");
    scanf("%d", &country);

    switch (country)
    {
    case 1:
        printf("\n1. Delhi\n2. Maharashtra\n3. Gujarat");
        printf("\nSelect Your State : ");
        scanf("%d", &state);

        switch (state)
        {
        case 1:
            printf("Country : India\nState : Delhi");
            break;
        case 2:
            printf("Country : India\nState : Maharashtra");
            break;
        case 3:
            printf("Country : India\nState : Gujarat");
            break;
        default:
            printf("Country : India\nState : NaN");
        }

        break;
    case 2:
        printf("\n1. Las Vegas\n2. New Jersey\n3. California");
        printf("\nSelect Your State : ");
        scanf("%d", &state);

        switch (state)
        {
        case 1:
            printf("Country : USA\nState : Las Vegas");
            break;
        case 2:
            printf("Country : USA\nState : New Jersey");
            break;
        case 3:
            printf("Country : USA\nState : California");
            break;
        default:
            printf("Country : USA\nState : NaN");
        }
        break;

    default:
        printf("Select Correct Country");
    }

    return 0;
}