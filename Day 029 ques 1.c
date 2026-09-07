Q57: Find the sum of array elements.


  #include <stdio.h>
   int main() {
  
    int n, sum = 0;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("%d\n", sum);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
