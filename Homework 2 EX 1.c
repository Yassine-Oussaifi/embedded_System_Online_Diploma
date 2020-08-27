#include <stdio.h>

int main()
{
    while(1)
    {
        int x;
        printf("Enter an integer you want to check: ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("%d is even.\n", x);
        }
        else
        {
            printf("%d is odd.\n", x);
        }
    }
    return 0;
}