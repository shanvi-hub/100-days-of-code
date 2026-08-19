Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){
    float principal;
    float time;
    float rate;

    float simple_interest;
    float compound_interest;
    float amount;

    scanf("%f %f %f", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("%f %f\n", simple_interest, compound_interest);

}


/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
