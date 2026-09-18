Q79: Perform diagonal traversal of a matrix.

  #include <stdio.h>
   void findDiagonalOrder(int mat[3][3], int m, int n) {
    int row = 0, col = 0;
    int up = 1; 

    for (int k = 0; k < m * n; k++) {
        printf("%d ", mat[row][col]);

        if (up) {
            if (col == n - 1) {
                row++;
                up = 0;
            } else if (row == 0) {
                col++;
                up = 0;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == m - 1) {
                col++;
                up = 1;
            } else if (col == 0) {
                row++;
                up = 1;
            } else {
                row++;
                col--;
            }
        }
    }
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    findDiagonalOrder(mat, 3, 3);
  
    return 0;

  
}


/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
