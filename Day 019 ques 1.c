Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {
  
    int num1, num2, max;

    scanf("%d %d", &num1, &num2);
  
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("%d\n", max);
            break;
        }
        max++;
    }
  
}


/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
