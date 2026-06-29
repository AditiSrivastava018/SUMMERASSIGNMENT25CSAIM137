#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("\n===== Menu Driven Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("Exiting Program...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                else
                {
                    printf("Division by zero is not possible.\n");
                }
                break;

            case 5:
                printf("Modulus = %d\n", (int)num1 % (int)num2);
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}