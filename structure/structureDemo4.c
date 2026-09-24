#include <stdio.h>
#define SIZE 2

// const int size = 4; // * size cannot be updated

struct Student
{
    int id;
    int rollNo;
} stud[SIZE];

void setData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter RollNo : ");
        scanf("%d", &stud[i].rollNo);
        printf("Enter ID : ");
        scanf("%d", &stud[i].id);
    }
}

void getData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("ID : %d\n", stud[i].id);
        printf("Roll Number : %d\n", stud[i].rollNo);
    }
}

int main()
{
    setData();
    getData();
    return 0;
}

// i need to add all data at once
// i need to add data one by one