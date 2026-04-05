#include <stdio.h>

struct variable
{
    /* data */
    int value1;
    int value2;
    char operation;
    int calculation;
    int year;
};

void leap_year(int *year)
{
    if (*year % 4 == 0 && *year % 100 != 0 || *year % 400 == 0)
    {
        printf("its a leap year \n");
    }
    else
    {
        printf("its not a leap year \n");
    }
}

int main()
{

    struct variable vb;

    while (1)
    {
        printf("enter the year:");
        scanf("%d", &vb.year);
        leap_year(&vb.year);
    }
}