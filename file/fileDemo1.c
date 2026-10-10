
#include <stdio.h>

// Structure to store student details
struct Student
{
    int age;
    float marks;
};

int main()
{
    // Create and initialize a structure variable
    struct Student s1 = {12, 90.0};

    // Declare a file pointer
    FILE *fp;

    // Open the file in write mode
    // If the file does not exist, it will be created
    // If the file exists, its old content will be erased
    fp = fopen("data1.txt", "w");

    // Check whether the file opened successfully
    if (fp == NULL)
    {
        printf("Error: Unable to open the file!\n");
        return 1;
    }

    int age = 78;

    // ------------------------------------------------
    // 1. fprintf() - Write formatted data to a file
    // ------------------------------------------------

    // Write an integer into the file
    // fprintf(fp, "%d", age);

    // Write a simple message into the file
    // fprintf(fp, "This is a file");

    // Write text along with a variable's value
    // fprintf(fp, "My age is %d", age);

    // ------------------------------------------------
    // 2. putc() - Write one character at a time
    // ------------------------------------------------

    // Write individual characters into the file
    // putc('H', fp);
    // putc('a', fp);
    // putc('r', fp);
    // putc('s', fp);
    // putc('h', fp);

    // Move to the next line
    // putc('\n', fp);

    // ------------------------------------------------
    // 3. fputs() - Write a string to a file
    // ------------------------------------------------

    // Write a complete string into the file
    // fputs("This is done with the help of fputs", fp);

    // ------------------------------------------------
    // 4. fwrite() - Write data in binary form
    // ------------------------------------------------

    int a = 90;

    // Write one integer in binary form
    // fwrite(&a, sizeof(a), 1, fp);

    // Write an entire array in binary form
    int arr[] = {10, 20, 30, 40, 50};

    // fwrite(arr, sizeof(arr), 1, fp);

    // ------------------------------------------------
    // 5. fwrite() - Write a structure in binary form
    // ------------------------------------------------

    // &s1       = address of the structure
    // sizeof(s1) = size of the structure in bytes
    // 1         = number of structures to write
    // fp        = file where the data is written

    if (fwrite(&s1, sizeof(s1), 1, fp) != 1)
    {
        printf("Error: Unable to write student data!\n");
        fclose(fp);
        return 1;
    }

    printf("Student data written successfully!\n");

    // Close the file after completing all operations
    fclose(fp);

    return 0;
}
