#include <stdio.h>
int fact(int x);
int main()
{
    int a;
    printf("Enter a positive integer :");
    scanf("%d", &a);
    printf("Factorial of %d = %d",a ,fact(a));

    return 0;
}
int fact (int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x-1);
}
