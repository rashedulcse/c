//sum of two integer
#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, result;
    printf("enter your first integer: ");
    //get first input
    scanf("%d", &firstNumber);

    printf("enter your second integer: ");
    //get second input
    scanf("%d", &secondNumber);
    result = firstNumber + secondNumber;
    //now show output
    printf("sum of two integers: %d", result);
}
