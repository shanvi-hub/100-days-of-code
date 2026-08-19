Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    
    float celsius;
    float fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5)+32;
    printf("%f\n", fahrenheit);

}


/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
