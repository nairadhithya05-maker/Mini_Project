#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}

Example 1: Addition
Enter an operator (+, -, *, /): +
Enter two numbers: 53
5.00 +3.00 = 8.00

Example 2: Division
Enter an operator (+, -, *, /): /Enter two numbers: 10 4
10.00/4.00 2.50

Example 3: Division by Zero (Error Handling)
Enter an operator (+, -, *, /): /Error! Division by zero is not allowed.
Enter two numbers: 80

Example 4: Invalid Operator
Enter an operator (+, -, *, /): &
Enter two numbers: 10 5
Error! Invalid operator.
