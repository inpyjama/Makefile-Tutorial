/*
 * Copyright (c) 2023 inpyjama.com
 * Author: Rajat Batra <rajat@inpyjama.com>
 */

#include <stdio.h>
#include "add/add.h"
#include "subtract/subtract.h"
#include "multiply/multiply.h"
#include "divide/divide.h"

int main() {
    int num1, num2, result;
    char operator;

    printf("using add library version %s\n\r", ADD_VERSION);
    printf("Enter first number(int): ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number(int): ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}