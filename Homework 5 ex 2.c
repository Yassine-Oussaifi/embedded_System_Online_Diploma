#include <stdio.h>
#include <string.h>
struct distance
{
    unsigned int feet;
    float inch;
};
struct distance d1,d2,sum;
void enter_distance(struct distance*);
void sum_distance(struct distance*,struct distance*,struct distance*);
int main()
{
    printf("Enter information for 1st distance");
    enter_distance(&d1);
    printf("Enter information for 2nd distance");
    enter_distance(&d2);
    sum_distance(&d1,&d2,&sum);
    printf("Sum of distances = %u'-%.1f\"",sum.feet, sum.inch);
    return 0;
}

void enter_distance(struct distance* dist)
{
    printf("\nEnter feet:");
    scanf("%u",&(dist->feet));
    printf("Enter inch:");
    scanf("%f",&(dist->inch));
}
void sum_distance(struct distance* dist1,struct distance* dist2,struct distance* sum)
{
    float temp =0;
    temp = dist1->inch + dist2->inch;
    if (temp >= 12)
    {
        sum->inch = temp - 12;
        sum->feet = dist1-> feet + dist2->feet +1;
    }
    else
    {
        sum->inch = temp ;
        sum->feet = dist1-> feet + dist2->feet;
    }
}

