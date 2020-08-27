#include <stdio.h>

int main()
{
    float x,y,result;
    char op;
    printf("Enter an operator either + or - or * or divide : ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &x, &y);
    switch (op)
    {
        case '+':
        {
            result = x + y;
            printf("%.1f %c %.1f =  %.1f", x, op, y, result);
        }
        break;
        case '-':
        {
            result = x - y;
            printf("%.1f %c %.1f =  %.1f", x, op, y, result);
        }
        break;
        case '*':
        {
            result = x * y;
            printf("%.1f %c %.1f =  %.1f", x, op, y, result);
        }
        break;
        case '/':
        {
            result = x / y;
            printf("%.1f %c %.1f =  %.1f", x, op, y, result);
        }
        break;
        default:
        {
            printf("Invalid operator");
        }
    }
    return 0;
}