Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

  #include <stdio.h>

void printFirstNegativeOfWindow(int arr[], int n, int k) {
    int negIndices[n];
    int front = 0, rear = 0;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negIndices[rear++] = i;
        }
    }

    if (front < rear) {
        printf("%d ", arr[negIndices[front]]);
    } else {
        printf("0 ");
    }

    for (int i = k; i < n; i++) {
      
        while (front < rear && negIndices[front] <= i - k) {
            front++;
        }

        if (arr[i] < 0) {
            negIndices[rear++] = i;
        }

        if (front < rear) {
            printf("%d ", arr[negIndices[front]]);
        } else {
            printf("0 ");
        }
    }
    printf("\n");
}

int main() {
    // Test Case 1
    int arr1[] = {-8, 2, 3, -6, 10};
    int k1 = 2;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: ");
    printFirstNegativeOfWindow(arr1, n1, k1);

    // Test Case 2
    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int k2 = 3;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: ");
    printFirstNegativeOfWindow(arr2, n2, k2);

    // Test Case 3
    int arr3[] = {12, 1, 3, 5};
    int k3 = 3;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: ");
    printFirstNegativeOfWindow(arr3, n3, k3);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
