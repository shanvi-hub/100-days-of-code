Q32: Write a program to check if a number is a palindrome.

  #include <stdio.h>
  int main() {
  
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

      return;

}


/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
