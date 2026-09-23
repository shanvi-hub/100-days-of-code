Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
int main() {
  
    char str[] = "hello world";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("%s\n", str);
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
