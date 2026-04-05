#include <stdio.h>

struct variable
{
    /* data */
    int value;
};

void prime_number(int *value)
{
    int isprime =1;
    if (*value <= 1)
    {
    printf("Not a prime number\n");
    return;
    }

   for( int i = 2; i < *value ; i++)
   {
         if ( *value % i == 0){
            isprime = 0;
            break;
         }
   }
   if( isprime == 0)
   printf("not prime number");
   else
   printf("prime number");
}

int main()
{
    struct variable vb;

    printf("enter the value");
    scanf("%d", &vb.value);

    prime_number(&vb.value);

}