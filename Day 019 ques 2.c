Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
  
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        sum = sum + remainder; 
        num = num / 10; 
    }
  
    printf("Sum of digits: %d\n", sum);

     return;

}


/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
