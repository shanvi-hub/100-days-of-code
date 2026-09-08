Q61: Search for an element in an array using linear search.

 #include <stdio.h>
  int main() {
  
    int n, i, key, found_index = -1;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found_index = i;
            break;
        }
    }
  
    if(found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }

    return 0;
  
} 


/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
