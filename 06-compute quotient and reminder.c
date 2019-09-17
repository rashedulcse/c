//compute quotient and reminder
#include <stdio.h>
int main()
{
    int dividend , divisor, quotient, reminder;

    printf("enter your devidend: ");
    scanf("%d", &dividend);

    printf("enter your divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    printf("quotient : %d \n", quotient);
    printf("reminder : %d", reminder);

    return 0;
}
