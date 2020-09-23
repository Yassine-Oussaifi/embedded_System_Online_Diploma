#include <stdio.h>
#define circleArea(r) (3.1415*(r)*(r))
int main()
{
    int radius=0;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    printf("\nArea: %.2f", circleArea(radius));
}