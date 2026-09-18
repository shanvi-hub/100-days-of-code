Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
  
    int rows, cols;
    
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }
    
    int mat[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    
    int isSymmetric = 1;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
