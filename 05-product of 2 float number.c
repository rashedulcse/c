#include<stdio.h>
int main()
{
    double firstNumber, secondNumber, product;
    printf("enter two float bumber: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);
    product = firstNumber * secondNumber;
    printf("product of two float number: %lf", product);
}
