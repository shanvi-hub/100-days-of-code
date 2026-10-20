Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

  #include <stdio.h>

int main()
{
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];

    printf("Enter %d sorted elements: ", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];

    int i = 0, j = 0, k = 0;

    // Compare elements of both arrays
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of nums1
    while (i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Copy remaining elements of nums2
    while (j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    printf("Merged array:\n");

    for (i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
