
#include <stdio.h>

struct Student
{
    int age;
    float marks;
};

int main()
{
    FILE *fp;
    char text[100];
    int ch;

    // =====================================
    // 1. WRITE TEXT INTO A FILE
    // =====================================

    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    // fprintf() - Write formatted text
    fprintf(fp, "Hello Students!\n");
    fprintf(fp, "Welcome to C File Handling.\n");

    // fputs() - Write a string
    fputs("This is a new line.\n", fp);

    // putc() - Write one character
    putc('A', fp);
    putc('\n', fp);

    fclose(fp);

    // =====================================
    // 2. READ TEXT FROM A FILE
    // =====================================

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    printf("\n--- Reading with fgets() ---\n");

    // Read one line at a time
    while (fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }

    fclose(fp);

    // =====================================
    // 3. READ ONE CHARACTER AT A TIME
    // =====================================

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    printf("\n--- Reading with getc() ---\n");

    // Use int because getc() can return EOF
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    // =====================================
    // 4. ftell() - FIND FILE POSITION
    // =====================================

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    // Read the first character
    ch = getc(fp);

    // Find the current file position
    printf("\n\nPosition: %ld\n", ftell(fp));

    fclose(fp);

    // =====================================
    // 5. fseek() - MOVE FILE POSITION
    // =====================================

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    // Move to the beginning of the file
    fseek(fp, 0, SEEK_SET);

    printf("\nFirst character: %c\n", getc(fp));

    // Move 6 bytes from the beginning
    fseek(fp, 6, SEEK_SET);

    printf("Character at position 6: %c\n", getc(fp));

    // Move to the end of the file
    fseek(fp, 0, SEEK_END);

    printf("File size: %ld bytes\n", ftell(fp));

    fclose(fp);

    // =====================================
    // 6. rewind() - GO TO THE BEGINNING
    // =====================================

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    // Move back to the beginning
    rewind(fp);

    printf("\nAfter rewind: %c\n", getc(fp));

    fclose(fp);

    // =====================================
    // 7. fwrite() - WRITE BINARY DATA
    // =====================================

    int number = 100;

    fp = fopen("number.dat", "wb");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    fwrite(&number, sizeof(number), 1, fp);

    fclose(fp);

    // =====================================
    // 8. fread() - READ BINARY DATA
    // =====================================

    int result = 0;

    fp = fopen("number.dat", "rb");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    if (fread(&result, sizeof(result), 1, fp) == 1)
    {
        printf("\nNumber from binary file: %d\n", result);
    }

    fclose(fp);

    // =====================================
    // 9. fwrite() AND fread() WITH STRUCT
    // =====================================

    struct Student s1 = {12, 90.5};

    fp = fopen("student.dat", "wb");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    fwrite(&s1, sizeof(s1), 1, fp);

    fclose(fp);

    struct Student s2;

    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    if (fread(&s2, sizeof(s2), 1, fp) == 1)
    {
        printf("\nStudent Age: %d\n", s2.age);
        printf("Student Marks: %.2f\n", s2.marks);
    }

    fclose(fp);

    return 0;
}
