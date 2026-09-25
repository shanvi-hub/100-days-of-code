Q92: Find the first repeating lowercase alphabet in a string.

  #include <stdio.h>
  #include <string.h>
   int main() {
  
    char str[100];
    int count[26] = {0}; 
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (count[str[i] - 'a'] > 1) {
                printf("Output: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");
  
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
