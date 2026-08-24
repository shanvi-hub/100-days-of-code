Q30: Write a program to reverse a given number.

#include <stdio.h>
int main() {

    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);
r
    while (num != 0) {
        remainder = num % 10;         
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                    
    }

    printf("Reversed Number: %d\n", reversedNum);

}


/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
