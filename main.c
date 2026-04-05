#include <stdio.h>

struct  variable
{
    /* data */
    int value1;
    int value2;
    char operation;
    int calculation;

};

void calculator(int *value1, int *value2, char *operation, int *result){
    switch (*operation){
        
        case '+':
            *result = *value1 + *value2;
            break;
        
        case '-':
            *result = *value1 - *value2;
            break;
          
        case '*':
            *result = *value1 * *value2;
            break;
         
        case '/':
            *result = *value1 / *value2;
            break;
    }
    // return *result;
}

int main(){

    struct variable vb;

    while (1){
    printf("enter the value first value:");
    scanf("%d", &vb.value1);

    printf("enter the value second value:");
    scanf("%d", &vb.value2);


    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &vb.operation);

    calculator(&vb.value1, &vb.value2, &vb.operation, &vb.calculation);

    printf(" the final result is %d \n", vb.calculation);
    }

}