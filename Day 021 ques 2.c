Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
  
    int num, i, sum = 0;

    printf("Input: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num > 0) {
        printf("Output: Perfect number\n");
    } else {
        printf("Output: Not perfect number\n");
    }

     return;
}


/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
