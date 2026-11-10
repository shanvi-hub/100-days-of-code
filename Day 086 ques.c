Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

  #include <stdio.h>
#include <string.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
} MenuChoice;

int main() {
    char operation[20];
    double num1, num2, result;
    MenuChoice choice = INVALID;

    if (scanf("%s %lf %lf", operation, &num1, &num2) != 3) {
        printf("Invalid Input\n");
        return 1;
    }

    if (strcmp(operation, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(operation, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(operation, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    }

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("%.0f\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("%.0f\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("%.0f\n", result);
            break;
        default:
            printf("Invalid Operation\n");
            break;
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
