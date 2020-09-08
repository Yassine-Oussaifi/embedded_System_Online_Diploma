#include <stdio.h>
float power(float x, int y);
int main()
{
    float x;
    int y;
    printf("enter a base number:");
    scanf ("%f",&x);
    printf("enter power number:");
    scanf("%d",&y);
    printf ( "result = %f", power(x,y));
    return 0;
}

float power(float x, int y)
{
    if (y == 1)
        return x;
    else
        return x*power(x,y-1);
}