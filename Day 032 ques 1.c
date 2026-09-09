Q63: Merge two arrays.

  #include <stdio.h>
   int main() {
  
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < n1) {
        merged[k++] = arr1[i++];
    }
    
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
    
    for (int idx = 0; idx < k; idx++) {
        printf("%d ", merged[idx]);
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
