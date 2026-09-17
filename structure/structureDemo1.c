#include <stdio.h>

struct Student
{
    int age;
    double marks;
};
// } Harsh;

struct Student Harsh;
struct Student Param;
// struct Student Harsh ,Param , Shyam ;
// * Harsh is global variable(which is accessible/modifiable throughout the program)

int main()
{
    // * set the data
    Harsh.age = 15;
    Harsh.marks = 89.5;
    Param.age = 12;
    Param.marks = 56.23;

    // * get the data
    printf("Harsh Age : %d\n", Harsh.age);
    printf("Harsh Marks : %lf\n\n", Harsh.marks);
    printf("Param Age : %d\n", Param.age);
    printf("Param Marks : %lf", Param.marks);

    return 0;
}