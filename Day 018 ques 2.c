Q36: Write a program to find the HCF (GCD) of two numbers.

  #include <stdio.h>
   int main() {
  
    int num1, num2, remainder;
  
    scanf("%d %d", &num1, &num2);
  
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("%d\n", num1);

    return;

}


/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
