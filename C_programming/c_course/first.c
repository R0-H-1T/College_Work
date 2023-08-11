#include <stdio.h>
void main()
{
    int sum_eve = 0, sum_odd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            sum_eve += i;
        else
            sum_odd += i;
    }
    printf("Even sum: %d, Odd sum: %d", sum_eve, sum_odd);
}