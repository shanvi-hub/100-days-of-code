Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main(){
    
    int a;
    int b;

    scanf("%d %d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d",a,b);

    return;

}


/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
