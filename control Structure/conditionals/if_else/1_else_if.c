// * Input two numbers and operator (+, -, *, /):  Use else-if to perform the selected operation.
#include <stdio.h>

int main()
{
    // * else if is used to check multiple conditions
    char op;
    int a, b;

    printf("Enter Two Numbers : ");
    scanf("%d%d", &a, &b);

start:

    printf("\n\nSelect Operation to be performed\n");
    printf("'+' for Addition\n");
    printf("'-' for Subtraction\n");
    printf("'*' for Multiplication\n");
    printf("'/' for Division\n");
    printf("Enter Your Choice : ");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("Sum of %d and %d is %d", a, b, a + b);
    }
    else if (op == '-')
    {
        printf("Subtraction of %d and %d is %d", a, b, a - b);
    }
    else if (op == '*')
    {
        printf("Multiplication of %d and %d is %d", a, b, a * b);
    }
    else if (op == '/')
    {
        printf("Division of %d and %d is %d", a, b, a / b);
    }
    else
    {
        printf("Select Correct operation which can be peroformed");
    }

    int choice;
    printf("\n\nDo you want to continue Again ? \n1.Yes\n2. No\nSelect your Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
        goto start;
    else
        printf("Program Over");

    return 0;
}