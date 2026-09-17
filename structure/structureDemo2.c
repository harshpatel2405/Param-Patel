#include <stdio.h>
#include <string.h>

struct Person
{
    char name[30];
    long int AadharID;
};

int main()
{
    struct Person Harsh; // * Harsh is local variable -- accessible only within current executing function

    // * set the data
    strcpy(Harsh.name, "Harsh Patel");
    Harsh.AadharID = 12345678;

    // * get the data
    printf("Name : %s", Harsh.name);
    printf("\nAadhar ID : %ld", Harsh.AadharID);

    return 0;
}