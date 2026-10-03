Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

  #include <stdio.h>
  #include <math.h>

int main() {
    long long n;
    
    if (scanf("%lld", &n) != 1) {
        return 0;
    }
    
    long long total_sum = n * (n + 1) / 2;
    
    long long x = (long long)sqrt(total_sum);
    
    if (x * x == total_sum) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
