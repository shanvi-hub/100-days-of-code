Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

  #include <stdio.h>
   int main() {
  
    int n;
    double sum = 0.0;
  
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = (4 * i) - 1;
        
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

}


/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
