Q72: Find the sum of all elements in a matrix.

  #include <stdio.h>
   int main() {
  
    int rows, cols, sum = 0;
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("Output: %d\n", sum);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
