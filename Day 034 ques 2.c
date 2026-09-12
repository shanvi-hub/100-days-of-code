Q68: Delete an element from an array.

 #include <stdio.h>
  int main() {
  
    int n, pos, i;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
  
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
  
} 


/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
