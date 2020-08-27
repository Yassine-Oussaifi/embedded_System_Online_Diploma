#include <stdio.h>

int main()
{
    float x, y, z, max;
    printf("Enter Three numbers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f %f", &x, &y, &z);
    max = (((x > y )? x : y)> z )? ((x > y )? x : y) : z;
    printf("Largest number =%.2f ",max);
    return 0;
}