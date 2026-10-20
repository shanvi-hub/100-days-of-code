Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
 int main() {
    int n;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int nums[n];
    int actual_sum = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actual_sum += nums[i];
    }

    int expected_sum = (n * (n + 1)) / 2;

    int missing_number = expected_sum - actual_sum;

    printf("Output: %d\n", missing_number);

    return 0;
   
}


/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
