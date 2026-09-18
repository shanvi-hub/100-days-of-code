Q80: Multiply two matrices.

  #include <stdio.h>
  int main() {
  
    int r1, c1, r2, c2;

    scanf("%d %d", &r1, &c1);
    int a[10][10], b[10][10], mult[10][10];

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Error! Column of first matrix not equal to row of second.\n");
        return 0;
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
