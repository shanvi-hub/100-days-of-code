Q82: Print each character of a string on a new line.

  #include <stdio.h>
   int main() {
  
    char str[] = "Hi";
    int i = 0;
    
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
