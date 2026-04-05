#include <stdio.h>

struct variable
{
    /* data */
    int value;
};

void palindrome_number(int *value)
{
    int original = *value;
    int number = *value;
    int temp = 0;
    int rev = 0;
    while(number > 0)
    {
        temp = number % 10;
        rev = rev * 10+ temp;
        number = number / 10;
    }

     if ( rev == original )
     {
        printf("palindrom");
     }
     else 
     printf(" not palindrom");
}

int main()
{
    struct variable vb;

    printf("enter the value");
    scanf("%d", &vb.value);

    palindrome_number(&vb.value);

}