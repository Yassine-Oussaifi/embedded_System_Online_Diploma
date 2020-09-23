#include <stdio.h>
struct student
{
    char name[20];
    unsigned int roll;
    float marks;
};
struct student classroom[10];
void enter_students(struct student std[]);
void display_students(struct student std[]);
int main()
{

    enter_students(&classroom);
    printf("Displaying information");
    display_students(&classroom);
    return 0;
}

void enter_students(struct student std[])
{
    for (int i = 0; i<10; i++)
    {
        switch (i)
        {
            case 0:
            {
                printf("Enter information of the 1st student :");
                break;
            }
            case 1:
            {
                printf("Enter information of the 2nd student :");
                break;
            }
            default:
                printf("Enter information of the %dth student :",i);
        }
        printf("\nEnter name:");
        scanf("%s",&(std[i].name));
        printf("Enter roll number:");
        scanf("%u",&(std[i].roll));
        printf("Enter marks:");
        scanf("%f",&(std[i].marks));
    }
}
void display_students(struct student std[])
{
    for (int i = 0; i<10; i++)
    {
        switch (i)
        {
            case 0:
            {
                printf("\ninformation of the 1st student :");
                break;
            }
            case 1:
            {
                printf("\ninformation of the 2nd student :");
                break;
            }
            default:
                printf("\ninformation of the %dth student :",i);
        }
        printf("\nname: %s", std[i].name);
        printf("\nroll number: %u", std[i].roll);
        printf("\nmarks: %.2f", std[i].marks);
    }
}