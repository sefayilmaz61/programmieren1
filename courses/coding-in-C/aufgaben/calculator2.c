#include <stdio.h>

int main(void)
{
    float a; 
    float b;
    float result;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            result = a + b;
            printf("The result of %.2f + %.2f = %.2f\n", a, b, result);
            break;

        case '-':
            result = a - b;
            printf("The result of %.2f - %.2f = %.2f\n", a, b, result);
            break;

        case '*':
            result = a * b;
            printf("The result of %.2f * %.2f = %.2f\n", a, b, result);
            break;

        case '/':
            if (b == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = a / b;
                printf("The result of %.2f / %.2f = %.2f\n", a, b, result);
            }
            break;

        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}