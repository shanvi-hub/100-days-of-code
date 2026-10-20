Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>

// Comparison function used by qsort to sort numbers in ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;

    // Read the size of the array
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of k
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Validate the value of k
    if (k < 1 || k > n) {
        printf("Invalid value of k. It must be between 1 and %d.\n", n);
        free(arr);
        return 1;
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    // The kth smallest element will be at index k - 1
    printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);

    // Free allocated memory
    free(arr);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
