Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {

    int num, i;
    unsigned long long fact = 1; 
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {

        for (i = 1; i <= num; ++i) {
            fact *= i; // fact = fact * i
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

}


/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
