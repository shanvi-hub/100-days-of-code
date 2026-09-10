Q65: Search in a sorted array using binary search.

  #include <stdio.h>
   int main() {
  
    int n, target;
  
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int resultIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            resultIndex = mid;
            break;
        } 
        else if (arr[mid] < target) {
            low = mid + 1; 
        } 
        else {
            high = mid - 1;
        }
    }

    if (resultIndex != -1) {
        printf("Found at index %d\n", resultIndex);
    } else {
        printf("-1\n");
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
