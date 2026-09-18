Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {

    char str1[] = "Hello";
    int count1 = 0;
    
    while (str1[count1] != '\0') {
        count1++;
    }
    printf("Input: %s -> Output: %d\n", str1, count1);

    char str2[] = " ";
    int count2 = 0;
    
    while (str2[count2] != '\0') {
        count2++;
    }
    printf("Input: \"%s\" -> Output: %d\n", str2, count2);

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
