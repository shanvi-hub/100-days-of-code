Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

  #include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
       
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i; 
        }
        leftSum += nums[i];
    }

    return -1;
}

int main() {

    int nums1[] = {1, 7, 3, 6, 5, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", pivotIndex(nums1, size1));

    int nums2[] = {1, 2, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", pivotIndex(nums2, size2));

    int nums3[] = {2, 1, -1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", pivotIndex(nums3, size3));

    return 0;
  
} 

#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
      
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i; 
        }
        leftSum += nums[i];
    }

    return -1;
  
}

int main() {
    
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", pivotIndex(nums1, size1));

    int nums2[] = {1, 2, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", pivotIndex(nums2, size2));

    
    int nums3[] = {2, 1, -1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", pivotIndex(nums3, size3));

    return 0;

}
/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
