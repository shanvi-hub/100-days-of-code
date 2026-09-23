Q86: Check if a string is a palindrome.

  #include <stdio.h>
  #include <string.h>
   int main() {
  
    char str[100];
    int i, j, flag = 0;

    scanf("%s", str);
    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
  
}


/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
