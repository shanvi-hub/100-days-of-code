Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){

float radius;
float area;
float circumference;

float pi=3.14159;


printf("Enter radius: ");
scanf("%f", &radius); 

area = pi * radius * radius;
circumference = 2 * pi * radius;

printf("%f %f\n",area,circumference);

}


/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
