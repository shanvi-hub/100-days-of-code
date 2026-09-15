Q74: Find the transpose of a matrix.

  #include <stdio.h>
   int main() {
  
    int r, c;
    
    if (scanf("%d %d", &r, &c) != 2) return 0;
    
    int a[10][10], transpose[10][10];
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
