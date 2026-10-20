Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

  #include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[10005] = {0}; 
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        freq[arr[i]]++;
    }

    printf("Repeated element: %d\n", repeated);
  
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
