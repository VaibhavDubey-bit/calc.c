
#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter 1st number: ");
    scanf("%f", &a);

    printf("Enter 2nd  number: ");
    scanf("%f", &b);

    printf("\nAddition = %.2f", a + b);
    printf("\nSubtraction = %.2f", a - b);
    printf("\nMultiplication = %.2f", a * b);

    if (b != 0)
    {
        printf("\nDivision = %.2f", a / b);
    }
    else
    {
        printf("\nDivision is not possible (cannot divide by zero).");
    }

    return 0;
}
