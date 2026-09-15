Q73: Find the sum of each row of a matrix and store it in an array.

  #include <stdio.h>
   int main() {
  
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int row_sums[rows];

    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0; 
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
       
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
