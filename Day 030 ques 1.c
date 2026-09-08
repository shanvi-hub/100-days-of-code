Q59: Count even and odd numbers in an array.

  #include <stdio.h>
   int main() {
  
    int n, even_count = 0, odd_count = 0;
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even=%d, Odd=%d\n", even_count, odd_count);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
