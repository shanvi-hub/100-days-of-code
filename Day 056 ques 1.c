Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

  #include <stdio.h>

void findNextGreaterElement(int arr[], int n) {
    int nextGreater;
    
    for (int i = 0; i < n; i++) {
        nextGreater = -1; // Default if no greater element is found
        
        // Nested loop to look for the nearest greater element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Found the nearest one, so stop searching
            }
        }
        
        // Print the result matching the required output format
        if (nextGreater == -1) {
            printf("\"-1\"");
        } else {
            printf("%d", nextGreater);
        }
        
        // Print comma separator for all elements except the last one
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    // Example using Sample Test Case 1
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findNextGreaterElement(arr, n);
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
