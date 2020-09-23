#include <stdio.h>
#include <string.h>
struct complex
{
    float real;
    float img;
};
struct complex z1,z2,sum;
void enter_complex(struct complex*);
void sum_complex(struct complex*,struct complex*,struct complex*);
int main()
{
    printf("For first complex number");
    enter_complex(&z1);
    printf("For second complex number");
    enter_complex(&z2);
    sum_complex(&z1,&z2,&sum);
    printf("Sum = %.1f+%.1fi",sum.real, sum.img);
    return 0;
}

void enter_complex(struct complex* cmp)
{
    printf("\nEnter real and imaginary respectively:");
    scanf("%f %f",&(cmp->real),&(cmp->img));
}
void sum_complex(struct complex* cmp1,struct complex* cmp2,struct complex* sum)
{
    sum->real = cmp1->real + cmp2->real;
    sum->img = cmp1->img + cmp2->img;
}

