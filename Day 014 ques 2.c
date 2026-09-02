Q28: Write a program to print the product of even numbers from 1 to n.

  #include <stdio.h>

   int main() {
  
    int n;
    long long product = 1;
  
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
  
    printf("Output: %lld\n", product);

      return;

}


/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
