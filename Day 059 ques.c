Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

  #include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (n < k) {
        printf("Invalid input: Array size is smaller than k.\n");
        return -1;
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    for (int i = k; i < n; i++) {
       
        current_sum += arr[i] - arr[i - k];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    // Test Case 1
    int arr1[] = {100, 200, 300, 400};
    int k1 = 2;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: %d\n", maxSubarraySum(arr1, n1, k1));

    // Test Case 2
    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: %d\n", maxSubarraySum(arr2, n2, k2));

    // Test Case 3
    int arr3[] = {100, 200, 300, 400};
    int k3 = 1;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: %d\n", maxSubarraySum(arr3, n3, k3));

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
