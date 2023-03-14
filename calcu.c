#include <stdio.h>
#include <math.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/rfcomm.h>
#include <sys/socket.h>
#include <unistd.h>

int main() 

{
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /, %%, A, D, I, B): ");
    scanf("%c", &operator);

    switch(operator) 
    
    
    {
        case '+':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '%':
            printf("Enter number: ");
            scanf("%lf", &num1);
            printf("Enter percentage: ");
            scanf("%lf", &num2);
            result = (num2 / 100) * num1;
            printf("%.2lf%% of %.2lf = %.2lf\n", num2, num1, result);
            break;
        case 'A':
            printf("Enter radius: ");
            scanf("%lf", &num1);
            result = M_PI * num1 * num1;
            printf("Area of circle with radius %.2lf = %.2lf\n", num1, result);
            break;
        case 'D':
            printf("Enter coefficient of x^2: ");
            scanf("%lf", &num1);
            printf("Enter coefficient of x: ");
            scanf("%lf", &num2);
            result = (num1 * num2) / 2;
            printf("Anti-derivative of %.2lfx^2 + %.2lfx = %.2lfx^3/6 + %.2lfx^2/4 + C\n", num1, num2, num1, num2);
            break;
        case 'I':
            printf("Enter lower limit: ");
            scanf("%lf", &num1);
            printf("Enter upper limit: ");
            scanf("%lf", &num2);
            result = (num2 * num2) / 2 - (num1 * num1) / 2;
            printf("Integral of x between %.2lf and %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '
    
    }
}