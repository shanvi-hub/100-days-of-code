Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
  
    int num, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        
        if (digit % 2 != 0) {
            product = product * digit;
        }
        
        num = num / 10;
    }

    printf("Product of odd digits: %d\n", product);

}


/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
