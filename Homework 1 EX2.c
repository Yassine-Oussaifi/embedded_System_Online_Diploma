#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    printf("You entered: %d",num);
    return 0;
}