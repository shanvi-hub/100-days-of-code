Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){


int total_seconds;
int hours;
int minutes;
int seconds;

    scanf("%d",&total_seconds);

    hours = total_seconds / 3600;

    total_seconds = total_seconds % 3600;

    minutes = total_seconds / 60;

    seconds = total_seconds % 60;

      printf("%d:%d:%d\n", hours,minutes,seconds);

}


/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
