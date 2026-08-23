Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){

int i;
int n;
int sum;
sum = 0;

printf("enter number :");
scanf("%d",&n);

for(i = 1; i <= n; i++){
        sum = sum + i;
    }

    printf("%d\n",sum);

}


/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
