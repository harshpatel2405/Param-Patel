/*
Parking Reservation System
Capacity - 10

Available Slots - 10
OccupiedSlots - 0

add -> as-- , os++    (should not add more than capacity)
remove -> as++ , os-- (if no vehicle present)
display -> capacity ,avaialble slots,Occupied Slots
Exit
*/

#include <stdio.h>
int main()
{
    int as, os, pr;
    as = 10;
    os = 0;

start:
    printf("1.reserve a slot\n 2.remove a slot\n3. Parking Detaisl\n4.Exit\n enter your choice:");
    printf("enter your choice:");
    scanf("%d", &pr);
    switch (pr)
    {
    case 1:
        if (as <= 10)
        {
            as--;
            os++;
            printf("The available slots are %d\n", as);
            printf("The occupied slots are %d\n", os);
            printf("your slot has been reserved\n\n\n");
        }
        else
        {
            printf("slots are full try again after 15 minutes\n\n");
        }
        goto start;
        break;
    case 2:
        if (os == 0)
        {
            printf("No vehcile avaialble to remove\n\n");
        }
        else
        {
            as++;
            os--;
            printf("The available slots are %d\n", as);
            printf("The occupied slots are %d\n", os);
            printf("you have exited safely");
        }
        goto start;
        break;
    case 3:
        printf("The available slots are %d\n", as);
        printf("The occupied slots are %d\n", os);
        goto start;
        break;
    case 4:
        printf("Exiting the system..");
        break;
    default:
        printf("Enter betwen 1 and 4 only\n\n");
        goto start;
    }
}