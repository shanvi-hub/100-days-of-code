Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main() {
  
    int num, first, last, digits = 0, temp, divisor = 1;
  
    scanf("%d", &num);
    
    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    first = temp;

    if (num < 10) {
        printf("%d", num);
    } else {
        int middle = (num % divisor) / 10;
        int result = last * divisor + middle * 10 + first;
      
        printf("%d", result);
    }

  return;
    
}


/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
