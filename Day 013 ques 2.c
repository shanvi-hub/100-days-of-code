Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i;

    // Read the upper limit from the user
    scanf("%d", &n);

    // Loop from 1 to n and print each number followed by a space
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

}


/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
