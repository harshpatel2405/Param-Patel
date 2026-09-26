#include <stdio.h>
#define SIZE 3

struct Student
{
    int age;
    int rollNo;
    char name[30];
    float marks;
};

struct Student stud[SIZE]; // * global variable

void setData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nStudent %d\n----------\n", i);
        printf("Enter Age : ");
        scanf("%d", &stud[i].age);

        printf("Enter Roll Number : ");
        scanf("%d", &stud[i].rollNo);

        printf("Enter marks : ");
        scanf("%f", &stud[i].marks);

        printf("Enter Name : ");
        scanf(" %s", stud[i].name);
    }
}

void getData()
{
    printf("\n-----------------------\nAll Student Details\n---------------------\n");
    printf("Name\tAge\tMarks\tRollNo\n----\t---\t-----\t-------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\t%d\t%f\t%d\n", stud[i].name, stud[i].age, stud[i].marks, stud[i].rollNo);
    }
}

int main()
{
    // * adding 5 records together
    setData();

    //* getting all the data
    getData();

    return 0;
}