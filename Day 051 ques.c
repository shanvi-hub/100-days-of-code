Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int findFirst(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int firstIdx = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            firstIdx = mid;
            end = mid - 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return firstIdx;
}

int findLast(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int lastIdx = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            lastIdx = mid;
            start = mid + 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return lastIdx;
}

int main() {
    
    int nums[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 8;

    int first = findFirst(nums, size, target);
    int last = findLast(nums, size, target);

    if (first == -1) {
        printf("-1,-1\n");
    } else {
        printf("%d,%d\n", first, last);
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
