#include <stdio.h>
struct student
{
    char name[20];
    unsigned int roll;
    float marks;
};
struct student s;
void enter_student(struct student*);
void display_student(struct student);
int main()
{
    printf("Enter information of student :");
    enter_student(&s);
    printf("Displaying information");
    display_student(s);
    return 0;
}

void enter_student(struct student* std)
{
    printf("\nEnter name:");
    scanf("%s",std->name);
    printf("Enter roll number:");
    scanf("%u",&(std->roll));
    printf("Enter marks:");
    scanf("%f",&(std->marks));
}
void display_student(struct student std)
{
    printf("\nname: %s", std.name);
    printf("\nroll number: %u", std.roll);
    printf("\nmarks: %.2f", std.marks);
}