// Performs addition, subtraction, multiplication or division depending the input from user
# include <stdio.h>
void main() {
    char operator; //for the switch operator in line:10
    double firstNumber,secondNumber; //Double is the integer data type
    printf("Enter the operation you want to execute\t(+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter the first number :\t");
    scanf("%lf", &firstNumber);
    printf("Enter the second number :\t");
    scanf("%lf", &secondNumber);
    switch(operator)
    {
        case '+':
            printf("Your exact value of above operation :\t%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("Your exact value of above operation :\t%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("Your exact value of above operation :\t%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("Your exact value of above operation :\t%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
            default:   // operator doesn't match any case constant (+, -, *, /)
            printf("Error! operator is not correct");
    }
}
