#include <stdio.h>
void  Pyramid(int x);

int main()
{
    int size;
    printf("How big do you want your Pyramid to be :");
    scanf("%d",&size);
    Pyramid(size);
    return 0;
}
void  Pyramid(int x)
{
   for (int i = 0; i<x; i++)
   {
       for(int j = i; j < x ; j++)
       {
           printf("%d ",j);
       }
       printf("\n");
   }
}