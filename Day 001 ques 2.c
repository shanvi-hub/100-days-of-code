Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){

int a;
int b;
int sum;
int diff;
int product;
int quotient;
scanf("%d %d",&a,&b);
sum = a+b;
diff = a-b;
product = a*b;
quotient = a/b;
printf("%d\n",sum);
printf("%d\n",diff);
printf("%d\n",product);
printf("%d\n",quotient);

  return;

}


/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
