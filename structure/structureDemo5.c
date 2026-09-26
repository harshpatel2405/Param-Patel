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
int studentCount = 0;

int searchStudent(int rno)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (stud[i].rollNo == rno)
        {
            return i;
        }
    }

    return -1;
}

void addStudent()
{
    if (studentCount < SIZE)
    {
        printf("\nStudent %d\n----------\n", studentCount);
        printf("Enter Roll Number : ");
        scanf("%d", &stud[studentCount].rollNo);

        int index = searchStudent(stud[studentCount].rollNo);
        if (index == -1)
        {

            printf("Enter Age : ");
            scanf("%d", &stud[studentCount].age);

            printf("Enter marks : ");
            scanf("%f", &stud[studentCount].marks);

            printf("Enter Name : ");
            scanf(" %s", stud[studentCount].name);

            printf("Student (%d) added successfulllly...\n\n", stud[studentCount].rollNo);
            studentCount++;
        }
        else
        {
            printf("Student with same credentials exist..\n\n");
        }
    }
    else
    {
        printf("NO More Students can be added\n\n");
    }
}

void displayAllStudents()
{
    if (studentCount == 0)
    {
        printf("No Students are there ....\n\n");
    }
    else
    {

        printf("\n-----------------------\nAll Student Details\n---------------------\n");
        printf("Name\tAge\tMarks\tRollNo\n----\t---\t-----\t-------\n");
        for (int i = 0; i < studentCount; i++)
        {
            printf("%s\t%d\t%0.1f\t%d\n", stud[i].name, stud[i].age, stud[i].marks, stud[i].rollNo);
        }
        printf("\n");
    }
}

void displayParticularStudent(int index)
{
    printf("Name : %s\n", stud[index].name);
    printf("Roll Number : %d\n", stud[index].rollNo);
    printf("Age : %d\n", stud[index].age);
    printf("Marks : %f\n\n", stud[index].marks);
}

void deleteStudent()
{
    int rno;
    printf("Enter Roll Number to be deleted : ");
    scanf("%d", &rno);

    int index = searchStudent(rno);
    if (index != -1)
    {
        for (int i = index; i < studentCount; i++)
        {
            stud[i] = stud[i + 1];
        }
        studentCount--;
        printf("Student deleted successfully..\n\n");
    }
    else
    {
        printf("No Such Student Found\n\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("1. add a student \n");
        printf("2. Display all students data \n");
        printf("3. update student data \n");
        printf("4. delete student \n");
        printf("5. view single student/searching \n");
        printf("6. Exit\n");
        printf("Select Your Operation : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayAllStudents();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            int rno;
            printf("Enter Roll Number to Search : ");
            scanf("%d", &rno);
            int index = searchStudent(rno);
            if (index != -1)
            {
                displayParticularStudent(index);
            }
            else
            {
                printf("NO Such Student Found..\n\n");
            }
            break;
        case 6:
            printf("Exiting the program\n");
            break;
        }
    } while (choice != 6);

    return 0;
}

// 1. add a student
// 2. all students data
// 3. update student data
// 4. delete student
// 5. view single student/searching