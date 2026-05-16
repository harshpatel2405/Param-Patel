#include <stdio.h>

int main()
{
    int a = 25, b = 64;

    // ternary operator  -- print , return
    //* condition   true                 false
    (a > b) ? printf("a is greater") : printf("B is greater");

    int ans = (a < b) ? a : b;
    printf("\n%d is minimum", ans);

    printf("\na == b  :: %d", (a == b ? 1 : 0));

    int p = 100, q = 200, r = 30;
    int max = (p > q) ? ((p > r) ? p : r) : ((q > r) ? q : r);
    printf("\n%d is max", max);

    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("Even") : printf("Odd");

    
    printf("\n%s",num % 2 != 0 ? "Odd" : "Even");

    return 0;
}