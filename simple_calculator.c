#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n====== SIMPLE CALCULATOR ======\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Power (^)\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        if(choice == 7) {
            printf("Exiting calculator... Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error! Division by zero.\n");
                    continue;
                }
                printf("Result = %.2lf\n", result);
                break;
            case 5:
                printf("Result = %d\n", (int)num1 % (int)num2);
                break;
            case 6:
                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;
            default:
                printf("Invalid choice! Please select between 1-7.\n");
        }
    }

    return 0;
}