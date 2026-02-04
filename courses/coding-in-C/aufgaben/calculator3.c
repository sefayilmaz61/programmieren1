#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main(void)
{
    float a, b, result;
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
            result = add(a, b);
            printf("The result of %.2f + %.2f = %.2f\n", a, b, result);
            break;

        case '-':
            result = sub(a, b);
            printf("The result of %.2f - %.2f = %.2f\n", a, b, result);
            break;

        case '*':
            result = mul(a, b);
            printf("The result of %.2f * %.2f = %.2f\n", a, b, result);
            break;

        case '/':
            if (b == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = div(a, b);
                printf("The result of %.2f / %.2f = %.2f\n", a, b, result);
            }
            break;

        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}