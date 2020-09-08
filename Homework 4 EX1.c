#include <stdio.h>
int prime(unsigned int arr[], int min, int max);
int min,max;
int main()
{
    int k;
    unsigned int arr[100]= {0};
    printf("Enter 2 numbers:");
    scanf("%d %d",&min,&max);
    printf("prime numbers between %d and %d are: ", min, max);
    k = prime(&arr, min, max);
    for (int i=0; i<k; i++)
    {
        printf("%d, ",arr[i]);
    }
    
    return 0;
}
int prime(unsigned int arr[], int min, int max)
{
    int k =0;
    for (int i = min; i<max; i++)
    {
        int prime_flag = 0;
        for (int j = 2; j < i/2; j++)
        {
            if (i % j == 0)
            {
                prime_flag =1;
            }
        }
        if (prime_flag == 0)
        {
            arr[k] = i;
            k += 1;
        }
    }
    return (k);
}
