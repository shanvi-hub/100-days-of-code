Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    
    float cp, sp, profit, loss, percentage;

    if (scanf("%f %f", &cp, &sp) != 2) {
        return 1;
    }
    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    } 
    else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss %.0f%%\n", percentage);
    } 
    else {

        printf("No Profit No Loss\n");
    }

}

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
