
#include <stdio.h>

// Structure to store student details
struct Student
{
    int age;
    float marks;
};

int main()
{
    // Declare a file pointer
    FILE *fp;

    // Open the file in read mode
    // The file must already exist
    fp = fopen("data1.txt", "r");

    // Check whether the file opened successfully
    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }


    // ------------------------------------------------
    // 1. fscanf() - Read formatted data from a file
    // ------------------------------------------------

    // Read an integer from the file
    // int age;
    // fscanf(fp, "%d", &age);
    // printf("Age: %d\n", age);


    // Read a word from the file
    // char word[60];
    // fscanf(fp, "%59s", word);
    // printf("Word: %s\n", word);

    // Note: %s reads only until the first whitespace character.


    // ------------------------------------------------
    // 2. getc() - Read one character at a time
    // ------------------------------------------------

    // int ch;

    // Read characters until the end of the file
    // while ((ch = getc(fp)) != EOF)
    // {
    //     printf("%c", ch);
    // }


    // ------------------------------------------------
    // 3. fgets() - Read a line of text
    // ------------------------------------------------

    // char line[60];

    // Read one line from the file
    // if (fgets(line, sizeof(line), fp) != NULL)
    // {
    //     printf("Line: %s", line);
    // }


    // Read the entire file line by line
    // while (fgets(line, sizeof(line), fp) != NULL)
    // {
    //     printf("Line: %s", line);
    // }


    // ------------------------------------------------
    // 4. fread() - Read binary data from a file
    // ------------------------------------------------

    // Read one integer from a binary file
    // int a;
    //
    // if (fread(&a, sizeof(a), 1, fp) == 1)
    // {
    //     printf("A: %d\n", a);
    // }


    // Read an entire integer array from a binary file
    // int arr[5];
    //
    // if (fread(arr, sizeof(arr), 1, fp) == 1)
    // {
    //     printf("arr[0]: %d\n", arr[0]);
    //     printf("arr[1]: %d\n", arr[1]);
    //     printf("arr[2]: %d\n", arr[2]);
    //     printf("arr[3]: %d\n", arr[3]);
    //     printf("arr[4]: %d\n", arr[4]);
    // }


    // ------------------------------------------------
    // 5. fread() - Read a structure from a binary file
    // ------------------------------------------------

    // Declare a structure variable to store the data
    struct Student s1;

    // Read one structure from the file
    if (fread(&s1, sizeof(s1), 1, fp) == 1)
    {
        printf("Student Age: %d\n", s1.age);
        printf("Student Marks: %.2f\n", s1.marks);
    }
    else
    {
        printf("Error: Unable to read student data!\n");
    }


    // Close the file after reading
    fclose(fp);

    return 0;
}
