#include "math.h"

int math(int num1, int num2, char Operator)
{
    switch (Operator)
    {
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '/':
            return num1/num2;
            break;
        case '%':
            return num1%num2;
            break;
        default:
            printf("Error operator invalid");
            
    }
}
