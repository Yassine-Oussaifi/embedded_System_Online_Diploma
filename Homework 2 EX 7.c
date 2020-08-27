#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Error !!! Factorial of negative number doesn't exist.");
    }
    else if (n==0)
    {
        printf("Factorial = %d", 1);
    }
    else
    {
        int fact = 1;
        for(int i=1;i<=n;i++)
            fact *= i;
        printf("Factorial = %d", fact);
    }
    return 0;
}