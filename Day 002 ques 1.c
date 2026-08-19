Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
    int area;
    int perimeter;
    int length;
    int breadth;

    scanf("%d %d",&length,&breadth);

    area = length * breadth;
    perimeter = 2*(length + breadth);

    printf("%d,%d\n",area,perimeter);

}


/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
