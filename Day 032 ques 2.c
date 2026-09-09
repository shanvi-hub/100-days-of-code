Q64: Find the digit that occurs the most times in an integer number.

 #include <stdio.h>
  int main() {
  
    long long num;
    int counts[10] = {0};
  
    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        return 1;
    }
    
    if (num < 0) {
        num = -num;
    }
    
    if (num == 0) {
        counts[0] = 1;
    }
    
    while (num > 0) {
        int digit = num % 10;
        counts[digit]++;
        num /= 10;
    }
    
    int mostFrequentDigit = 0;
    int maxCount = counts[0];
    
    for (int i = 1; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequentDigit = i;
        }
    }
    
    printf("Output: %d\n", mostFrequentDigit);
    
    return 0;
  
} 


/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
