Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){

    int num;

    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return;

}


/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
