Q66: Insert an element in a sorted array at the appropriate position.

  #include <stdio.h>
   int main() {
  
    int n, num, i, pos;
    
    scanf("%d", &n);
    
    int arr[100]; 
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &num);
    
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            pos = i;
            break;
        }
    }
    
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    
    arr[pos] = num;
  
    n++;
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
