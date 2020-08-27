#include <stdio.h>

int main()
{

    char x;
    printf("Enter an alphabet: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &x);
    if ( ((x >= 'a')&&(x <= 'z'))||((x >= 'A')&&(x <= 'Z')))
    {
        switch (x)
            {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            {
                printf("%c is a vowel.",x);
            }
            break;
            default:
            {
                printf("%c is a constant.",x);
            }
            break;
        }
    }
    else
    {
        printf("%c is not an alphabet.",x);
    }

    return 0;
}